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
void removefirstspace(char *str)
{
    char *src, *dst;
    src = dst = str;
    src++;
    while (*src != '\0') {
        *dst = *src;
         dst++;
         src++;
    }
    *dst = '\0';
}
