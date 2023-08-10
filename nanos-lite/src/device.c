#include <common.h>
#include "fs.h"

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

char events[1000] = {}; //在最后一个事件的末尾加上\0
int events_loc = 0;  // \0位置

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

size_t events_read(void *buf, size_t offset, size_t len) {
  
  AM_INPUT_KEYBRD_T ev_keybrd = io_read(AM_INPUT_KEYBRD);



  if(ev_keybrd.keycode != AM_KEY_NONE){

      int ret = snprintf(&events[events_loc], len, "k%c %s\n", (ev_keybrd.keydown == true) ? 'd' : 'u',  keyname[ev_keybrd.keycode]);
      
      events_loc += ret;

  }

  if(events_loc < 2)
    return 0;

  printf("%s", events);
  events_loc -= 2;  //到最后一个事件的\n前一个位置
  while(events[events_loc-1] != '\n' && events_loc != 0){ //到最后一个事件开始位置
    events_loc --;
  }

  strcpy(buf, &events[events_loc]);
  printf("buf is %s\n", buf);
  
  events[events_loc] = '\0';
  
  return 1;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
