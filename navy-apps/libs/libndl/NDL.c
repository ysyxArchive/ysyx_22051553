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
static int fbsync = -1;
static int screen_w = 0, screen_h = 0;
static int disp_w = 0, disp_h = 0;


uint32_t NDL_GetTicks() {  //1Tick->1ms
  
  struct timeval tv;
  gettimeofday(&tv, NULL);
  
  uint32_t ms = tv.tv_sec*1000 + tv.tv_usec/1000;
  return ms;
}

int NDL_PollEvent(char *buf, int len) {   //轮询？

  int fd = open("/dev/events", 0, 0);   //对于native或者nanos,读取键盘的逻辑都是轮询

  return read(fd, buf, len);
}

void NDL_OpenCanvas(int *w, int *h) {  // w、h为画布尺寸（以字节为单位）        
  
    // int fbctl = 4;               // 从ioe读取系统屏幕尺寸信息
    int fbctl = open("/proc/dispinfo", 0);

    if(*w == 0 || *h == 0){
      screen_h = disp_h;        //以像素点为单位
      screen_w = disp_w;

      *h = disp_h;
      *w = disp_w;
    }  
    else{
      screen_w = *w; 
      screen_h = *h;  //记录画布大小
    }
    

  if (getenv("NWM_APP")) {   //NWM_APP才需要做mmap等操作
    fbctl = open("/proc/dispinfo", 0);;
    fbdev = open("/dev/fb", 0);;
    screen_w = *w; screen_h = *h;
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

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) { //NDL_DrawRect(x, 0, 0, w, h);即在中间显示

  
  // write(fbdev, pixels, w*h);
  // write(fbsync, 0, 0);
  lseek(fbdev, ((disp_w - w)/2 + (disp_h - h)/2 * disp_w)*sizeof(uint32_t) , SEEK_SET);  //移动画布从左上角到中间
  for(int i = 0; i < h; i++){        //逐行写入，是因为对应glibc_write的普通文件操作，write(fbdev, pixels, w*h);并不能跳跃着写，写一个矩形
    
    write(fbdev, pixels + i*w, w*sizeof(uint32_t));    //以字节为单位
    lseek(fbdev, (disp_w - w)*sizeof(uint32_t), SEEK_CUR);
    
  }
  write(fbsync, 0, 0);
  
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
    // evtdev = 3;
    evtdev = open("/dev/events", 0);
  }
  

  // fbdev = 5;
  fbdev = open("/dev/fb", 0);
  fbsync = open("/dev/fb_sync", 0);

  //获取系统屏幕大小
  char dispinfo[32];
  
  // read(4, dispinfo, 32);
  int fbctl = open("/proc/dispinfo", 0);
  read(fbctl, dispinfo, 32);

  char* token = strtok(dispinfo, " :\n");         
  while(token != NULL){
    if(strcmp(token, "WIDTH")==0 ||  strcmp(token, "HEIGHT")==0){
      if(strcmp(token, "WIDTH") == 0){
        token = strtok(NULL, " :\n");
        disp_w = atoi(token);
      }
      else if(strcmp(token, "HEIGHT")==0){
        token = strtok(NULL, " :\n");
        disp_h = atoi(token);
      }
    }
    token = strtok(NULL, " :\n");
  }
  //---------------------

  return 0;
}

void NDL_Quit() {
}
