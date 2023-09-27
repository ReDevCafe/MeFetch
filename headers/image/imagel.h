#ifndef IMAGE_LOADER_HEADER
#define IMAGE_LOADER_HEADER

#include <string.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h> 

extern const char *define_extension(const char* file);
extern SDL_Surface *Load_Image(const char* file);

#endif // ! IMAGE_LOADER_HEADER