#include <common.h>
#include "fs.h"

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

char events[1000] = {}; //在最后一个事件的末尾加上\0
int events_loc = 0;  // \0位置

char screen_info[10] = {};
int screen_w = 0, screen_h = 0;

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for(size_t i = 0; i < len; i ++){
    putch(*(((char*)buf)+i));
  }
  return len;
}

// size_t events_read(void *buf, size_t offset, size_t len) { //只有键盘事件
//   AM_INPUT_KEYBRD_T ev_keybrd = io_read(AM_INPUT_KEYBRD);

//   if(ev_keybrd.keycode != AM_KEY_NONE){

//       int ret = snprintf(&events[events_loc], len, "k%c %s\n", (ev_keybrd.keydown == true) ? 'd' : 'u',  keyname[ev_keybrd.keycode]);
      
//       events_loc += ret;

//       events[events_loc] = '\0';
//   }

//   if(events_loc < 2)
//     return 0;

//   events_loc -= 2;  //到最后一个事件的\n前一个位置
//   while(events[events_loc-1] != '\n' && events_loc != 0){ //到最后一个事件开始位置
//     events_loc --;
//   }

//   strcpy(buf, &events[events_loc]);
  
//   events[events_loc] = '\0';

//   return strlen(buf) - 1;   //返回不包含\n的长度， strlen本身不包含\0
// }

size_t events_read(void *buf, size_t offset, size_t len) { //只有键盘事件
  AM_INPUT_KEYBRD_T ev_keybrd = io_read(AM_INPUT_KEYBRD);

  if(ev_keybrd.keycode != AM_KEY_NONE){ //直接返回，节省时间
      return ev_keybrd.keydown ? 0x8000 | ev_keybrd.keycode : ev_keybrd.keycode;
  }

  if(events_loc < 2)
    return 0;

  events_loc -= 2;  //到最后一个事件的\n前一个位置
  while(events[events_loc-1] != '\n' && events_loc != 0){ //到最后一个事件开始位置
    events_loc --;
  }

  strcpy(buf, &events[events_loc]);
  
  events[events_loc] = '\0';

  return strlen(buf) - 1;   //返回不包含\n的长度， strlen本身不包含\0
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {   //使用ioe
  AM_GPU_CONFIG_T ev_gpuconf = io_read(AM_GPU_CONFIG);

  return snprintf(buf, len, "WIDTH : %d\nHEIGHT : %d\n", ev_gpuconf.width, ev_gpuconf.height);
}

size_t screeninfo_write(const void *buf, size_t offset, size_t len) { //不使用ioe,用缓存
  // snprintf(screen_info, len, "%s", buf);
  
  // //mmap ok
  // int num = snprintf(&events[events_loc], 10, "%s", "mmap ok\n");
  // events_loc += num;
  // events[events_loc] = '\0';


  // //----待实现库函数
  // int loc = 0;
  // char sw[10], sh[10];
  // while(screen_info[loc] != ' '){
  //   loc ++;
  // }
  // strncpy(sw, screen_info, loc);
  // strncpy(sh, &screen_info[loc+1], loc);
  // //-----------

  // screen_w = atoi(sw);
  // screen_h = atoi(sh);


  // return 0;
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) { //offset即文件偏移量,以字节为单位  （offset/4）为offset对应的像素点偏移

  AM_GPU_CONFIG_T ev_gpuconf = io_read(AM_GPU_CONFIG);
  int sys_w = ev_gpuconf.width;
  const my_pixel * pixel_bundle = buf;
  // printf("x is %d, y is %d\n", (offset/4)%sys_w, (offset/4)/sys_w);
  io_write(AM_GPU_FBDRAW, (offset/4)%sys_w, (offset/4)/sys_w, (void*)(pixel_bundle->pixel_budle), pixel_bundle->w, pixel_bundle->h, false);  //单位都是uint32，即以像素点为单位

  return 0;
}

size_t fbsync_write(const void *buf, size_t offset, size_t len) {
  io_write(AM_GPU_FBDRAW, 0, 0, 0, 0, 0, true);
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
