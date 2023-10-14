#include <stdio.h> 
#include <stdint.h> 
#include <stdlib.h>
#include <assert.h>

struct BitmapHeader {
  uint16_t type;
  uint32_t filesize;
  uint32_t resv_1;
  uint32_t offset;
  uint32_t ih_size;
  uint32_t width;
  uint32_t height;
  uint16_t planes;
  uint16_t bitcount; // 1, 4, 8, or 24
  uint32_t compression;
  uint32_t sizeimg;
  uint32_t xres, yres;
  uint32_t clrused, clrimportant;
} __attribute__((packed));

// void* BMP_Load(const char *filename, int *width, int *height) {
//   FILE *fp = fopen(filename, "r");
//   if (!fp) return NULL;

//   struct BitmapHeader hdr;
//   assert(sizeof(hdr) == 54);
//   assert(1 == fread(&hdr, sizeof(struct BitmapHeader), 1, fp));

//   if (hdr.bitcount != 24) return NULL;
//   if (hdr.compression != 0) return NULL;
//   int w = hdr.width;
//   int h = hdr.height;
//   // printf("w is %d, h is %d, in BMP_Load\n", w, h);

//   uint32_t *pixels = malloc(w * h * sizeof(uint32_t));

//   int line_off = (w * 3 + 3) & ~0x3;
//   for (int i = 0; i < h; i ++) {
//     fseek(fp, hdr.offset + (h - 1 - i) * line_off, SEEK_SET);
//     int nread = fread(&pixels[w * i], 3, w, fp);
    
//     for (int j = w - 1; j >= 0; j --) {
//       uint8_t b = *(((uint8_t*)&pixels[w * i]) + 3 * j);
//       uint8_t g = *(((uint8_t*)&pixels[w * i]) + 3 * j + 1);
//       uint8_t r = *(((uint8_t*)&pixels[w * i]) + 3 * j + 2);
//       pixels[w * i + j] = (r << 16) | (g << 8) | b;

//       // printf("read bmp %d is 0x%x\n",w*i+j,  pixels[w * i + j] );
//     }
//   }

//   fclose(fp);
//   if (width) *width = w;
//   if (height) *height = h;
//   return pixels;
// }
void* BMP_Load(const char *filename, int *width, int *height) {
    FILE *fp = fopen(filename, "rb");  
    if (!fp) return NULL;
    
    struct BitmapHeader hdr;
    assert(sizeof(hdr) == 54);
    fread(&hdr, sizeof(struct BitmapHeader), 1, fp);

    if (hdr.bitcount != 24 || hdr.compression != 0) {
        fclose(fp);  
        return NULL;
    }

    int w = hdr.width;
    int h = hdr.height;
    // printf("offset is %d\n", hdr.offset);
    // printf("time0\n");
    uint32_t *pixels = malloc(w * h * sizeof(uint32_t));
    // uint8_t *buf = aligned_alloc(8, w * h * 3 + 8);  //buf8字节对齐 --扩充8个字节，最多7个不对齐 --aligned_alloc无法使用
    // uint8_t *base = malloc(w * h * 3 + 16);  //涉及两次对齐
    // uint64_t align_addr = (uint64_t)(base);
    // while(align_addr & 0x7 != 0){
    //   align_addr ++;
    // }
    // uint8_t * buf = (uint8_t*)align_addr;
    // printf("buf is %p\n", buf);
    // printf("time1\n");
    fseek(fp, hdr.offset, SEEK_SET);
    printf("time2\n");
    // fread(buf, 1, w * h * 3, fp);
    // printf("total is %d\n", w*h*3);

    // fread(buf, w * h * 3 + 8, 1, fp); //修改
    uint8_t * buf = malloc(w * h * sizeof(uint32_t));
      printf("buf is %p\n", buf);
    fread(buf, w * h * 3, 1, fp); //修改
    
    // uint8_t *buf_off = buf;
    // while(*buf_off == 0){
    //   buf_off ++;
    // }
    // printf("buf_off is %p\n", buf_off);
    printf("time3\n");
    fclose(fp); 



    for (int i = 0; i < h; i++) {   //非常消耗时间：1.每个像素的rgb通道值都分别获取，2.二重循环，3.每次像素计算都涉及大量运算，4.pixel为32位，可以尝试pixel_pair
         int index_base = (h-1-i)*w;
         for (int j = 0; j < w; j++) {
              int index = (index_base + j)*3;
              uint8_t r = buf[index + 2]; //改成内存操作
              uint8_t g = buf[index + 1];
              uint8_t b = buf[index];
              pixels[i * w + j] = (r << 16) | (g << 8) | b;
         }
    }


    // int index_base = (h-1)*w;   //反而ipc下降
    // for (int i = 0; i < h; i++) {   //非常消耗时间：1.每个像素的rgb通道值都分别获取，2.二重循环，3.每次像素计算都涉及大量运算，4.pixel为32位，可以尝试pixel_pair
    //   int j = 0;

    //   while(j < w){

    //     uint8_t* index = buf_off + (index_base -  i*w + j) * 3;
    //     int off = (uint64_t)index & 0x7;
    //     uint64_t base_addr = ((uint64_t)index >> 3) << 3;
    //     uint64_t pixel_pair = 0;
    //     uint64_t buffer_64 = 0;
    //     uint64_t buffer_next = 0;
    //     uint32_t pixel = 0;

    //     int pixel_off = i * w + j;
    //     switch (off)
    //     {
    //     case 0:
    //       buffer_64 = *((uint64_t*)base_addr);
    //       pixel_pair = buffer_64 & 0xfff | ((buffer_64 >> 24) & 0xfff) << 32;
    //       *(uint64_t*)(&pixels[pixel_off]) = pixel_pair;
    //       j += 2;
    //       break;
    //     case 1:
    //       buffer_64 = *((uint64_t*)base_addr);
    //       pixel_pair = (buffer_64 >> 8) & 0xfff | ((buffer_64 >> 32) & 0xfff) << 32;
    //       *(uint64_t*)(&pixels[pixel_off]) = pixel_pair;
    //       j += 2;
    //       break;
    //     case 2:
    //       buffer_64 = *((uint64_t*)base_addr);
    //       pixel_pair = (buffer_64 >> 16) & 0xfff | ((buffer_64 >> 40) & 0xfff) << 32;
    //       *(uint64_t*)(&pixels[pixel_off]) = pixel_pair;
    //       j += 2;
    //       break;
    //     case 3:
    //       buffer_64 = *((uint64_t*)base_addr);
    //       pixel = (buffer_64 >> 24) & 0xfff;
    //       *(uint32_t*)(&pixels[pixel_off]) = pixel;
    //       j += 1;
    //       break;
    //     case 4:
    //       buffer_64 = *((uint64_t*)base_addr);
    //       pixel = (buffer_64 >> 32) & 0xfff;
    //       *(uint32_t*)(&pixels[pixel_off]) = pixel;
    //       j += 1;
    //       break;
    //     case 5:
    //       buffer_64 = *((uint64_t*)base_addr);
    //       pixel = (buffer_64 >> 40) & 0xfff;
    //       *(uint32_t*)(&pixels[pixel_off]) = pixel;
    //       j += 1;
    //       break;
    //     case 6:
    //       if(pixel_off < w*h -1){
    //         buffer_64 = *((uint64_t*)base_addr);
    //         buffer_next = *((uint64_t*)(base_addr + 8));
    //         pixel_pair = ((buffer_64 >> 48) & 0xff | (buffer_next & 0xf) << 16) | ((buffer_next >> 8) & 0xfff) << 32;
    //         *(uint64_t*)(&pixels[pixel_off]) = pixel_pair;
    //         j += 2;
    //       }else{
    //         buffer_64 = *((uint64_t*)base_addr);
    //         buffer_next = *((uint64_t*)(base_addr + 8));
    //         pixel = ((buffer_64 >> 48) & 0xff | (buffer_next & 0xf) << 16);
    //         *(uint32_t*)(&pixels[pixel_off]) = pixel;
    //         j += 1;
    //       }
    //     break;
    //     case 7:
    //       if(pixel_off < w*h -1){
    //         buffer_64 = *((uint64_t*)base_addr);
    //         buffer_next = *((uint64_t*)(base_addr + 8));
    //         pixel_pair = ((buffer_64 >> 56) & 0xf | (buffer_next & 0xff) << 8) | ((buffer_next >> 16) & 0xfff) << 32;
    //         *(uint64_t*)(&pixels[pixel_off]) = pixel_pair;
    //         j += 2;
    //       }else{
    //         buffer_64 = *((uint64_t*)base_addr);
    //         buffer_next = *((uint64_t*)(base_addr + 8));
    //         pixel = ((buffer_64 >> 56) & 0xf | (buffer_next & 0xff) << 8);
    //         *(uint32_t*)(&pixels[pixel_off]) = pixel;
    //         j += 1;
    //       }
    //     break;
    //     default:
    //       break;
    //     }
        

    //   }
    // }



    // free(base); 
    free(buf);
    printf("time4\n");

    if (width) *width = w;
    if (height) *height = h;
    return pixels;
}