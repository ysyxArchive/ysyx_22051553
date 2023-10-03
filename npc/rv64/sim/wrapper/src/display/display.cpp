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
    // #ifdef MTRACE
    printf(ANSI_FMT("write mem at " "0x%016lx" " for %d bytes\n", ANSI_FG_YELLOW),waddr, 
    (wmask == 0xff) ? 8 : 
    (wmask == 0x0f) ? 4 : 
    (wmask == 0x03) ? 2 : 
    (wmask == 0x01) ? 1 : 0
    );

    printf("write data is 0x%lx\n", wdata);
    // #endif

    switch (wmask)
    {
        case 0xff:
            *(uint64_t*)((uint8_t*)vmem + waddr - FB_ADDR) = wdata;
            break;
        case 0x0f:
            *(uint32_t*)((uint8_t*)vmem + waddr - FB_ADDR) = wdata;
            break;
        case 0x03:
            *(uint16_t*)((uint8_t*)vmem + waddr - FB_ADDR) = wdata;
            break;
        case 0x01:
            *(uint8_t*)((uint8_t*)vmem + waddr - FB_ADDR) = wdata;
            break;
        default:;
    }
}