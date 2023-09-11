#include "main.h"

void cmdexc(char **av, char *actcmdd)
{
    char *cmdd = NULL, buffer[32], PATH[32] = "/bin/";
    int i;

    if(av)
        cmdd = av[0];
    for (i = 0; i < strlen(cmdd) + 1; i++)
    {
        buffer[i] = cmdd[i];
    }
    if(buffer[0] != '/')
        strcpy(PATH, actcmdd);
    else{
        strcpy(PATH, buffer);
    }
    if (execve(PATH, av, NULL) == -1)
    {
     perror(":( Error");
    }
}
