#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[20] = {};
  int n = NDL_PollEvent(buf, 20);

  if(buf[0] == 'k'){    //键盘事件
    printf("buf is %s\n", buf);
    if(buf[1] == 'u'){
      ev->type = SDL_KEYUP;
      for(int i = 0; i < sizeof(keyname) / sizeof((keyname)[0]); i ++){
        
        if(strcmp(keyname[i], &buf[3]) == 0){
          ev->key.keysym.sym = i;
          break;
        }
      }
    }
      
    else if(buf[1] == 'd'){
      
      ev->type = SDL_KEYDOWN;
      printf("size of arr is %d\n", sizeof(keyname) / sizeof((keyname)[0]));
      
      
      for(int i = 0; i < sizeof(keyname) / sizeof((keyname)[0]); i ++){
        if(i == 74){
          printf("key73 is %s, buf is %s\n", keyname[74], &buf[3]);
        }
        if(strcmp(keyname[i], &buf[3]) == 0){//字符数组，要加地址
          printf("i is %d\n", i);
          ev->key.keysym.sym = i;
          break;
        }
      }
    }

    return 1;
  }

  return 0;

}

int SDL_WaitEvent(SDL_Event *event) {
  while(!SDL_PollEvent(event));
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
