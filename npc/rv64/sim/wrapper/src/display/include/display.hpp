#ifndef __DISPLAY__
#define __DISPLAY__
#include<stdint.h>
#include<SDL2/SDL_render.h>



#define SCREEN_W 800
#define SCREEN_H 600


class Display{
public:
    Display(){
        vmem = new uint32_t[SCREEN_W*SCREEN_H];
        std::fill_n(vmem, SCREEN_H*SCREEN_W, 0x00ffffff);
    }
    ~Display(){
        delete []vmem;
    }
    
    void init_screen();
    void update_screen();

    void vmem_write(uint64_t waddr, uint64_t wdata, uint8_t wmask);

private:
    uint32_t* vmem = NULL;

    SDL_Renderer *renderer = NULL;
    SDL_Texture *texture = NULL;



};

extern Display display;


#endif