#include "../../headers/utils/argc.h"

int Load_Variables(int argc, char *argv[])
{
    int opt;

    while((opt = getopt(argc, argv, "w:h:b:")) != -1)
    {
        switch(opt)
        {
            case 'w':
            {
                char *endptr;
                WINDOW_WIDTH = strtol(optarg, &endptr, 10);
                if(endptr == optarg)
                {
                    fprintf(stderr, RED "×" RESET " Invalid type of argument for WINDOW_WIDTH\n");
                    return 1;
                }
                break;
            }
            case 'h':
            {
                char *endptr;
                WINDOW_HEIGHT = strtol(optarg, &endptr, 10);
                if(endptr == optarg)
                {
                    fprintf(stderr, RED "×" RESET " Invalid type of argument for WINDOW_HEIGHT\n");
                    return 1;
                }
                break;
            }
            case 'b':
            {
                if (access(optarg, 0) == 0)
                    WINDOW_BACKGROUND_PATH = optarg;
                else
                {
                    fprintf(stderr, RED "×" RESET " The file " CYAN "%s" RESET " doesn't exist \n", optarg);
                    return 1;
                }
                break;
            }
            default:
            {
                fprintf(stderr, CYAN "?" RESET " Usage: %s (-w <width>) (-h <height>) (-b <background_path>)\n", argv[0]);
                return 1;
            }
        }
    }

    if(!WINDOW_WIDTH || !WINDOW_HEIGHT || !WINDOW_BACKGROUND_PATH)
    {
        fprintf(stderr, RED "×" RESET " Invalid or null parameters\n"
                CYAN "?" RESET " Usage: %s (-w <width>) (-h <height>) (-b <background_path>)\n", 
                argv[0]);
        return 1;
    }


    return 0;
}