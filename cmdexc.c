#include "main.h"

void cmdexc(char **av, char *actcmdd)
{
    char *cmdd = NULL, buffer[32], PATH[32] = "/bin/";
    int i, x;
    
    
    if(av){
        cmdd = av[0];
        x = strlen(cmdd) + 1;}
    for (i = 0; i < x; i++)
    {
        buffer[i] = cmdd[i];
    }
    if(buffer[0] != '/')
        strcpy(PATH, actcmdd);
    else{
        strcpy(PATH, buffer);
    }
    if(buffer[0] != '\0'){
    if (execve(PATH, av, NULL) == -1)
    {
     perror(":( Error");
     exit (0);
    }}
}
