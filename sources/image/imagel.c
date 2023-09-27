#include "../../headers/image/imagel.h"

const char *check_extension(const char* file)
{
    const char *dot = strrchr(file, '.');

    if(!dot || dot == file) 
    {
        fprintf(stderr, "× Unexcepted file (are you missing something?)\n");
        return NULL;
    }

    return dot + 1;
}

SDL_Surface *Load_Image(const char* file)
{
    const char *extension = check_extension(file);

    printf("ai ;3\n");

    if(!extension) return NULL; 
    else if (strcmp(extension, "jpg") || strcmp(extension, "jpeg") ||
             strcmp(extension, "png") || strcmp(extension, "tiff"))
        return IMG_Load(file);
    else if(strcmp(extension, "bmp"))
        return SDL_LoadBMP(file);
    else
    {
        printf(extension, "Invalid format type: %s\n");
        return NULL;
    }
    return NULL;
}

