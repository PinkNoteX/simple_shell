#include "main.h"

void cmdexc(char **av)
{
    char *cmdd = NULL;
    
    if(av)
    {
        cmdd= av[0];
    }
    if (execvp(cmdd,av) == -1)
    {
     perror(":( Error");
    
    }
}
