#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

// void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) { //pal使用了该函数

//   assert(dst && src);
//   assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);


//   //有效大小
//   SDL_Rect valid_srcrect = srcrect ? *srcrect : (SDL_Rect){0, 0, src->w, src->h};  //如果是空指针，则复制整个源面
//   SDL_Rect valid_dstrect = dstrect ? *dstrect : (SDL_Rect){0, 0, dst->w, dst->h};  //如果是空指针，则复制到目标面的左上角

  

//   if(valid_dstrect.w == 0 && valid_dstrect.h == 0){
//     valid_dstrect.w = src->w <= dst->w ? src->w : dst->w;
//     valid_dstrect.h = src->h <= dst->h ? src->h : dst->h;
//   }


  
//   //实际复制的宽和高   --有待修改
//   int copy_width = valid_dstrect.w; 
//   int copy_height = valid_dstrect.h;

  

//   //复制位块
//   if(dst->format->BitsPerPixel == 8){
//     for (int i = 0; i < copy_height; i++) {
//       for (int j = 0; j < copy_width; j++) {
//         int src_pixel_pos = (valid_srcrect.y + i) * src->w + (valid_srcrect.x + j);
//         int dst_pixel_pos = (valid_dstrect.y + i) * dst->w + (valid_dstrect.x + j);

//         (dst->pixels)[dst_pixel_pos] = (src->pixels)[src_pixel_pos];
//     }
//   }
//   }
//   else if(dst->format->BitsPerPixel == 32){
      
//       for (int i = 0; i < copy_height; ++i) {
//         for (int j = 0; j < copy_width; ++j) {
//           int src_pixel_pos = (valid_srcrect.y + i) * src->w + (valid_srcrect.x + j);
//           int dst_pixel_pos = (valid_dstrect.y + i) * dst->w + (valid_dstrect.x + j);

//           ((uint32_t*)dst->pixels)[dst_pixel_pos] = ((uint32_t*)src->pixels)[src_pixel_pos];
//         }
//       }
//   }
  


//   return ;
// }

void SDL_BlitSurface(SDL_Surface* src, SDL_Rect* srcrect, SDL_Surface* dst, SDL_Rect* dstrect) {
    if (!dst || !src) {
        printf("Source or destination surface is NULL.\n");
        return;
    }

    if (src->format->BitsPerPixel != dst->format->BitsPerPixel) {
        printf("Source and destination surface bit depth do not match.\n");
        return;
    }

    SDL_Rect valid_src_rect = srcrect ? *srcrect : (SDL_Rect){0, 0, src->w, src->h};
    SDL_Rect valid_dst_rect = dstrect ? *dstrect : (SDL_Rect){0, 0, 0, 0};

    int copy_width = valid_src_rect.w;
    int copy_height = valid_src_rect.h;

    for (int i = 0; i < copy_height; i++) {
        for (int j = 0; j < copy_width; j++) {
            int src_pixel_pos = (valid_src_rect.y + i) * src->w + valid_src_rect.x + j;
            int dst_pixel_pos = (valid_dst_rect.y + i) * dst->w + valid_dst_rect.x + j;

            switch (src->format->BitsPerPixel) {
              case 8: {
                  ((uint8_t*)dst->pixels)[dst_pixel_pos] = ((uint8_t*)src->pixels)[src_pixel_pos];
                  break;
              }
              case 32: {
                  ((uint32_t*)dst->pixels)[dst_pixel_pos] = ((uint32_t*)src->pixels)[src_pixel_pos];
                  break;
              }
              default: {
                  printf("Unsupported surface bit depth: %d\n", src->format->BitsPerPixel);
                  return;
              }
            }
        }
    }
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {  //其中，dstrect的x,y是基于Surface左上角的//Surface可以看成画布
  assert(dst);                                                            //pal没有使用该函数

  
  if(dst->format->BitsPerPixel == 32){
      if(dstrect == NULL){
        // for(int i = 0; i < (dst->w * dst->h); i ++){        //i以像素点为单位，但是piexl是uint_8*类型
        //   ((uint32_t *)(dst->pixels))[i] = color;        
        // }                         
        for(int i = 0; i < (dst->h); i ++){                          
          for(int j = 0; j < (dst->w); j ++){
            ((uint32_t *)(dst->pixels))[j+i*(dst->w)] = color;   
          }                                           
        }
      }
      else{
        
        for(int i = dstrect->y; i < dstrect->y + dstrect->h; i++){
          for(int j = dstrect->x; j < dstrect->x + dstrect->w; j++){
            *(((uint32_t *)(dst->pixels)) + dst->w * i + j) = color;
          }
        }
      }
  }else {
    if(dstrect == NULL){
        // for(int i = 0; i < (dst->w * dst->h); i ++){        //i以像素点为单位，但是piexl是uint_8*类型
        //   ((uint32_t *)(dst->pixels))[i] = color;        
        // }                         
        for(int i = 0; i < (dst->h); i ++){                          
          for(int j = 0; j < (dst->w); j ++){
            ((dst->pixels))[j+i*(dst->w)] = color;   
          }                                           
        }
      }
      else{
        
        for(int i = dstrect->y; i < dstrect->y + dstrect->h; i++){
          for(int j = dstrect->x; j < dstrect->x + dstrect->w; j++){
            *((dst->pixels) + dst->w * i + j) = color;
          }
        }
      }
    
  }




  return ;
  assert(0);
}

// uint32_t SDL_MapRGB(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b) {
//   assert(fmt->BytesPerPixel == 4);
//   uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
//   return p;
// }

// void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
//   assert(dst);
//   // 映射相应的颜色
//   color = SDL_MapRGB(dst->format, (color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF);

//   if (dst->format->BitsPerPixel == 32) {
//     if (dstrect == NULL) {
//       for (int i = 0; i < dst->h; i++) {
//         for (int j = 0; j < dst->w; j++) {
//           ((uint32_t *)dst->pixels)[j + i * dst->w] = color;
//         }
//       }
//     } else {
//       for (int i = dstrect->y; i < dstrect->y + dstrect->h; i++) {
//         for (int j = dstrect->x; j < dstrect->x + dstrect->w; j++) {
//           *((uint32_t *)dst->pixels + dst->w * i + j) = color;
//         }
//       }
//     }
//   } else if (dst->format->BitsPerPixel == 8) {
//     if (dstrect == NULL) {
//       for (int i = 0; i < dst->h; i++) {
//         for (int j = 0; j < dst->w; j++) {
//           ((uint8_t *)dst->pixels)[j + i * dst->w] = color;
//         }
//       }
//     } else {
//       for (int i = dstrect->y; i < dstrect->y + dstrect->h; i++) {
//         for (int j = dstrect->x; j < dstrect->x + dstrect->w; j++) {
//           *((uint8_t *)dst->pixels + dst->w * i + j) = color;
//         }
//       }
//     }
//   } else {
//     printf("Unsupported color depth: %d bit", dst->format->BitsPerPixel);
//     return;
//   }
// }

void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  if(s->format->BitsPerPixel == 32){
    if(w == 0 && h == 0){
      NDL_DrawRect((uint32_t *)(s->pixels), x, y, s->w, s->h);
      return ;
    }
    NDL_DrawRect((uint32_t *)(s->pixels), x, y, w, h);
    return ;
  }
  else if(s->format->BitsPerPixel == 8){
    if(w == 0 && h == 0){
      w = s->w;
      h = s->h;
    }

    printf("x is %d, y is %d, w is %d, h is %d, pitch is %d\n", x, y, w, h, s->pitch);
    uint32_t *pixels = malloc(w*h*sizeof(uint32_t));
    uint32_t base_pos = x + y * s->w;
    uint32_t pixel_num = 0;
    

    for(int i = 0; i < h; i++) {
        
        for(int j = 0; j < w; j++) {
            SDL_Color change_color = s->format->palette->colors[s->pixels[base_pos + j]];
            pixels[pixel_num] = change_color.a << 24 | change_color.r << 16 | change_color.g << 8 | change_color.b;
            i ++;
        }
        base_pos += s->w;
    }


    // 浪费时间转换
    // uint32_t *changerb_pixels = malloc(w*h*sizeof(uint32_t));  //转换红蓝
    // ConvertPixelsARGB_ABGR(changerb_pixels, pixels, w*h);
    NDL_DrawRect(pixels, x, y, w, h);
    // NDL_DrawRect(pixels, x, y, w, h);
    free(pixels);
    // free(changerb_pixels);
    return ;
    }
  
  assert(0);
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
}