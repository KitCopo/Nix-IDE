#include <stdio.h>
#include "vanguarde.h"

unsigned char Compatibility()
{
    #ifdef _WIN32
        return 'w';
    #else
        printf("O sistema operacional nao e compativel\n");
        return 'o';
    #endif
}