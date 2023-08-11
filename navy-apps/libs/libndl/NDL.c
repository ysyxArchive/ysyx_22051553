#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <assert.h>


static int evtdev = -1;            // /dev/events
static int fbdev = -1;             // /dev/fb 
static int screen_w = 0, screen_h = 0;


uint32_t NDL_GetTicks() {  //1Tick->1ms
  
  struct timeval tv;
  gettimeofday(&tv, NULL);
  
  uint32_t ms = tv.tv_sec*1000 + tv.tv_usec/1000;
  return ms;
}

int NDL_PollEvent(char *buf, int len) {

  int fd = open("/dev/events", 0, 0);

  return read(fd, buf, len);
}

void NDL_OpenCanvas(int *w, int *h) {  // w、h为画布尺寸
  if (getenv("NWM_APP")) {
    int fbctl = 4;               // 存储屏幕尺寸信息
    fbdev = 5;
    
    int sys_w, sys_h = 0;
    char dispinfo[32];
    
    read(fbctl, dispinfo, 32);

    char* token = strtok(dispinfo, " :\n");
    while(token != NULL){
      if(strcmp(token, "WIDTH")==0 ||  strcmp(token, "HEIGHT")==0){
        if(strcmp(token, "WIDTH") == 0){
          token = strtok(NULL, " :\n");
          sys_w = atoi(token);
        }
        else if(strcmp(token, "HEIGHT")==0){
          token = strtok(NULL, " :\n");
          sys_h = atoi(token);
        }
      }
    }

    printf("sys_w : %d\nsys_h : %d\n", sys_w, sys_h);

    screen_w = *w; screen_h = *h;  //记录画布大小

    assert(screen_w <= sys_w && screen_h <= sys_h);
    //先不管后面的过程
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
