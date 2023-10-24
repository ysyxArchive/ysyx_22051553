#include<SDL2/SDL.h>
#include<SDL2/SDL_video.h>
#include<display.hpp>
#include<define.h>
#include<debug.h>
#include<npc.h>

Display display;

void Display::init_screen(){
    SDL_Window *window = NULL;
    char title[] = "NPC_WINDOW";

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(
        SCREEN_W,
        SCREEN_H,
        0, &window, &renderer
    );
    SDL_SetWindowTitle(window, title);

    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

void Display::update_screen(){
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void Display::vmem_write(uint64_t waddr, uint64_t wdata, uint8_t wmask){
    #ifdef MTRACE
    printf("wmask is 0x%x\n", wmask);
    printf(ANSI_FMT("write mem at " "0x%016lx" " for %d bytes\n", ANSI_FG_YELLOW),waddr,8);

    printf("write data is 0x%lx\n", wdata);
    #endif

    for(int i = 0; i < 8; i ++){
        if(wmask & 0x1 == 1){
            *(uint8_t*)((uint8_t*)vmem + waddr + i - FB_ADDR) = (uint8_t)wdata;
        }
        wmask = wmask >> 1;
        wdata = wdata >> 8;
    }
}