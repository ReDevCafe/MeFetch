#include "../../headers/utils/argc.h"

int Load_Variables(int argc, char *argv[])
{
    if(argc == 1)
    {
        printf(MAGENTA "• MeFetch arguments" RESET ":\n" CYAN "mefetch " GREEN "(width) (height) (background path)\n" RESET);
        return 1;
    }
    
    if(argc != 4)
    {
        printf(RED "×" RESET " To much or not enough arguments.\n");
        return 1;
    }

    char *endptr;
    WINDOW_WIDTH = (strtol(argv[1], &endptr, 10));
    if(endptr == argv[1])
    {
        fprintf(stderr, RED "×" RESET "Invalid type of argument for WINDOW_WIDTH\n");
        return 1;
    }

    WINDOW_HEIGHT = (strtol(argv[2], &endptr, 10));
    if(endptr == argv[2])
    {
        fprintf(stderr, RED "×" RESET " Invalid type of argument for WINDOW_HEIGHT\n");
        return 1;
    }

    WINDOW_BACKGROUND_PATH = argv[3];
    return 0;
}