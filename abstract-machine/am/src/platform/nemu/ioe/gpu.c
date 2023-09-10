#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  uint32_t vga_ctrl_bundle = inl(VGACTL_ADDR);
  int i;
  int w = vga_ctrl_bundle>>16;  
  int h = vga_ctrl_bundle & 0xffff;  
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = 0x00FFFFFF;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t vga_ctrl_bundle = inl(VGACTL_ADDR);
  int height = vga_ctrl_bundle & 0xffff;
  int width = vga_ctrl_bundle >> 16;
  int vmemsz = height*width*sizeof(uint32_t);

  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = vmemsz
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  gpuptr_t *pixels = ctl->pixels;

  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  int screen_w = inl(VGACTL_ADDR) >> 16;
  for(int n = 0; n < ctl->h; n ++)
    for(int m = 0; m < ctl->w; m ++){   //行优先
      outl((uintptr_t)(fb + ctl->x + (ctl->y)*(screen_w) + m + n*screen_w),
      pixels[m+ n*(ctl->w)]);    //其中ctl->x等的单位都是像素点
    }


  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
