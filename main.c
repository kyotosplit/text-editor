#include <stdio.h>
#include <assert.h>

#include <SDL.h>

#define BOOL u32
#define TRUE 1
#define FALSE 0

#define SCREEN_WIDTH 1024
#define SCREEN_WIDTH 576


typedef Uint32 u32;
typedef Uint64 u64;
typedef Sint32 i32;
typedef Sint64 i64;

int main(int argc, char *argv[]){
  SDL_Init(SDL_INIT_VIDEO);

  SDL_Window *win = SDL_CreateWindow("Test Window",
                                     SDL_WINDOWOS_UNDEFINED,
                                     SDL_WINDOWOS_UNDEFINED,
                                     SCREEN_HEIGHT,
                                     SCREEN_WIDTH,
                                     0);
  assert(win);

  SDL_Renderer *renderer = SDL_CreateRenderer(win, 0, SDL_RENDERER_SOFTWARE);
  assert(renderer);

  SDL_Texture *screen = SDL_CreateTexture(renderer,
                                          SDL_PIXELFORMAT_RGB888,
                                          SDL_TEXTUREACCESS_STREAMING,
                                          SCREEN_WIDTH,
                                          SCREEN_HEIGHT);
  assert(screen);

  u32 *screen_pixels = (u32*) calloc(SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(u32));
  assert(screen_pixels);
  
  SDL_Delay(3000);
}
