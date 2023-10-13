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
    uint8_t *base = malloc(w * h * 3 + 16);  //涉及两次对齐
    uint64_t align_addr = (uint64_t)(base);
    while(align_addr & 0x7 != 0){
      align_addr ++;
    }
    uint8_t * buf = (uint8_t*)align_addr;
    // printf("buf is %p\n", buf);
    // printf("time1\n");
    fseek(fp, hdr.offset, SEEK_SET);
    printf("time2\n");
    // fread(buf, 1, w * h * 3, fp);
    // printf("total is %d\n", w*h*3);

    fread(buf, w * h * 3 + 8, 1, fp); //修改


    uint8_t *buf_off = buf;
    while(*buf_off == 0){
      buf_off ++;
    }
    // printf("buf_off is %p\n", buf_off);
    printf("time3\n");
    fclose(fp); 

    for (int i = 0; i < h; i++) {
         for (int j = 0; j < w; j++) {
              int index = (h - 1 - i) * w + j;
              uint8_t r = buf_off[index * 3 + 2]; //改成内存操作
              uint8_t g = buf_off[index * 3 + 1];
              uint8_t b = buf_off[index * 3];
              pixels[i * w + j] = (r << 16) | (g << 8) | b;
         }
    }

    free(base); 

    if (width) *width = w;
    if (height) *height = h;
    return pixels;
}