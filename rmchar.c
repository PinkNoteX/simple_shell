#include "main.h"

void removeChar(char *str, char garbage1, char garbage2)
{
    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        if (*src != garbage1 && *src != garbage2) {
            *dst = *src;
            dst++;
        }
    }
    *dst = '\0';
}
void removefirstspace(char *str)
{
    if (str[0] != '\0') {
        strcpy(str, str + 1);
    }
}
