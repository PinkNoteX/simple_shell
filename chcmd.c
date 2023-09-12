#include "main.h"
 
 void chcmd(char **av, char *actcmdd,char **env){
    char * command;
    unsigned int i;

    command = av[0];
    if(strcmp(command, "env") == 0 || strcmp(command, "printenv") == 0)
    {
    i = 0;
    while (env[i] != NULL)
    {
        printf("%s\n", env[i]);
        i++;
    }
    }
    else 
    {
        cmdexc(av,actcmdd);
    }
 }
