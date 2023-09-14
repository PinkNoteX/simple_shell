#include "main.h"

void removeChar(char *str, char garbage1, char garbage2)
{
    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage1 && *dst != garbage2) dst++;
    }
    *dst = '\0';
}
