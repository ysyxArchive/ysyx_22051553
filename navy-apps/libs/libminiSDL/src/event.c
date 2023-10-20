#include <NDL.h>
#include <SDL.h>
#include <string.h>




#define keyname(k) #k,


static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

uint8_t keyState[255] = {0};


int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

// int SDL_PollEvent(SDL_Event *ev) {
  
//   char buf[20] = {};
//   int n = NDL_PollEvent(buf, 20);
  
//   if(buf[0] == 'k'){    //键盘事件
    

//     int n = 0;
//     while(buf[n] != '\n'){
//       n ++;
//     }
//     buf[n] = '\0';   //去掉事件中的\n

//     if(buf[1] == 'u'){
//       ev->type = SDL_KEYUP;
//       for(int i = 0; i < sizeof(keyname) / sizeof((keyname)[0]); i ++){
        
//         if(strcmp(keyname[i], &buf[3]) == 0){
//           ev->key.keysym.sym = i;
//           keyState[i] = 0;
//           break;
//         }
//       }
//     }
      
//     else if(buf[1] == 'd'){
      
//       ev->type = SDL_KEYDOWN;
      
//       for(int i = 0; i < sizeof(keyname) / sizeof((keyname)[0]); i ++){
//         if(strcmp(keyname[i], &buf[3]) == 0){//字符数组，要加地址
          
//           ev->key.keysym.sym = i;
//           keyState[i] = 1;
//           break;
//         }
//       }
//     }

//     return 1;
//   }

//   return 0;

// }

int SDL_PollEvent(SDL_Event *ev) {//只有键盘事件
  
  int n = NDL_PollEvent(NULL, 0);
  
  if(n != 0){    //键盘事件
    bool type = (n & 0x8000);
    int code = n & 0x7fff;

    if(type){
      keyState[code] = 1;
    }else{
      keyState[code] = 0;
    }

    ev->type = type;
    ev->key.keysym.sym = code;

    printf("type is %d, sym is %d\n", type, code);
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

uint8_t* SDL_GetKeyState(int *numkeys) {   //这是SDL2\SDL库中没有的,从SDL2开始，被移除了

  return keyState;
}
