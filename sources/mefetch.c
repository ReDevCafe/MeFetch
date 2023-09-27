#include "../headers/mefetch.h"

SDL_Window *MAIN_CLASS_WINDOW;
SDL_Renderer *MAIN_CLASS_RENDERER;
SDL_Surface *MAIN_CLASS_SURFACE;
SDL_Event MAIN_CLASS_EVENT;

long WINDOW_WIDTH;
long WINDOW_HEIGHT;
char* WINDOW_BACKGROUND_PATH;

int main(int argc, char *argv[])
{
    if(Load_Variables(argc, argv) != 0)
    {
        printf(YELLOW "↻" RESET " Something is fucked up.\n");
        return 1;
    }

    printf(MAGENTA "mefetch" RESET " as loaded "CYAN "variables" RESET ".. \n• resolution: (%ld by %ld)\n", WINDOW_WIDTH, WINDOW_HEIGHT);

    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr, RED "×" RESET " SDL_Init failed: %s\n", SDL_GetError());
        return 1;
    }

    MAIN_CLASS_WINDOW = SDL_CreateWindow("SDL_IMG_MANIP", SDL_WINDOWPOS_UNDEFINED, 
    SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    MAIN_CLASS_RENDERER = SDL_CreateRenderer(MAIN_CLASS_WINDOW, -1, SDL_RENDERER_ACCELERATED);

    MAIN_CLASS_SURFACE = Load_Image(WINDOW_BACKGROUND_PATH);
    if(!MAIN_CLASS_SURFACE)
    {
        fprintf(stderr, RED "×" RESET " Failed to load image: %s\n", SDL_GetError());

        SDL_DestroyRenderer(MAIN_CLASS_RENDERER);
        SDL_DestroyWindow(MAIN_CLASS_WINDOW);
        SDL_Quit();
        return 1;
    }
    return 0;
}