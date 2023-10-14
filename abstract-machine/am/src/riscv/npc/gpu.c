#include <am.h>
#include "include/npc.h"

#define SYNC_ADDR (VGACTL_ADDR + 4)

int w = 0;
int h = 0;


void __am_gpu_init() {
  uint32_t vga_ctrl_bundle = inl(VGACTL_ADDR);
  
  w = vga_ctrl_bundle>>16;  
  h = vga_ctrl_bundle & 0xffff;  
  // 初始化成白色
  uint64_t *fb = (uint64_t *)(uintptr_t)FB_ADDR;
  for (int i = 0; i < w * h / 2; i ++) fb[i] = 0xFFFFFF00FFFFFF;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  // uint32_t vga_ctrl_bundle = inl(VGACTL_ADDR);
  int height = h;
  int width = w;
  int vmemsz = height*width*sizeof(uint32_t);

  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = vmemsz
  };
}

// void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
//   if (ctl->sync) {
//     outl(SYNC_ADDR, 1);
//     return ;
//   }


//   gpuptr_t *pixels = ctl->pixels;

//   uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
//   int screen_w = w;
//   for(int n = 0; n < ctl->h; n ++)
//     for(int m = 0; m < ctl->w; m ++){   //行优先
//       outl((uintptr_t)(fb + ctl->x + (ctl->y)*(screen_w) + m + n*screen_w),
//       pixels[m+ n*(ctl->w)]);    //其中ctl->x等的单位都是像素点
//     }

    
//   // if (ctl->sync) {
//   //   outl(SYNC_ADDR, 1);
//   // }
// }

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) { //优化
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
    return ;
  }


  uint32_t * pixels = ctl->pixels;
  int screen_w = w;
  //使用8字节写vmem
  uint32_t* fb = (uint32_t *)(uintptr_t)FB_ADDR;
  //计算初始地址，防止在循环里每次都计算
  uintptr_t begin_addr = (uintptr_t)((uint32_t*)fb + ctl->x + (ctl->y)*(screen_w));
  
  
  
  //使用outd
  bool w_odd = (ctl->w) % 2;  //保证如果w为奇数，也能写入单个pixel
  bool x_odd = (ctl->x) % 2;  //保证sd指令8字节对齐

  for(int n = 0; n < ctl->h; n ++){
    uint64_t offaddr = (uint64_t)((uint32_t*)begin_addr + n*screen_w);  //screen_w也是以4字节为单位
    uint64_t offnum = n* (ctl->w); //避免每次都乘法计算


    if(x_odd){
      uint32_t pixel = pixels[offnum];
      outl(offaddr, pixel); 

      if(w_odd){
        for(int m = 0; m < ctl->w/2; m++){
          uint64_t pixel_pair = *((uint64_t *)(&pixels[m*2 + 1 + offnum]));
          outd(offaddr + m*8 + 4, pixel_pair); 
        }
      }
      else{
        for(int m = 0; m < ctl->w/2 - 1; m++){
          uint64_t pixel_pair = *((uint64_t *)(&pixels[m*2 + 1 + offnum]));
          outd(offaddr + m*8 + 4, pixel_pair); 
        }

        uint32_t pixel = pixels[offnum+ctl->w-1];
        outl(offaddr + (ctl->w -1) * 4 , pixel); 
      }
    }
    else{
      for(int m = 0; m < ctl->w/2; m++){
        uint64_t pixel_pair = *((uint64_t *)(&pixels[m*2 + offnum]));
        outd(offaddr + m*8, pixel_pair); 
      }

      if(w_odd){
        uint32_t pixel = pixels[offnum+ctl->w-1];
        outl(offaddr + (ctl->w -1) * 4 , pixel); 
      }
    }
  }
}



void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
