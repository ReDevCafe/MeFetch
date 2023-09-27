#ifndef MEFETCH_HEADER
#define MEFETCH_HEADER
#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION

#include <stdio.h>
#include <string.h>

#include <SDL2/SDL.h>
#include "image/imagel.h"
#include "utils/argc.h"
#include "utils/color.h"

extern SDL_Window *MAIN_CLASS_WINDOW;
extern SDL_Renderer *MAIN_CLASS_RENDERER;
extern SDL_Surface *MAIN_CLASS_SURFACE;
extern SDL_Event MAIN_CLASS_EVENT;

extern long WINDOW_WIDTH;
extern long WINDOW_HEIGHT;
extern char* WINDOW_BACKGROUND_PATH;

#endif // ! MEFETCH_HEADER