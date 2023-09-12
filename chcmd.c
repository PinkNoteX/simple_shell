#include "main.h"
 
 void chcmd(char **av, char *actcmdd,char **env){
    char * command;
    unsigned int i;

    command = av[0];
    {
    if(strcmp(command, "env") == 0 || strcmp(command, "printenv") == 0)
    {
    i = 0;
    while (env[i] != NULL)
    {
        write(STDOUT_FILENO, env[i], strlen(env[i]));
        write(STDOUT_FILENO,"\n",1);
        i++;
    }
    }
    else 
    {
        cmdexc(av,actcmdd);
    }}
 }
