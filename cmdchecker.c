#include "main.h"
char *cmdchecker(char **array, char *cmd)
{
        int i;
        struct stat buf;
        char cmdarray[10000];
        char arraystore[10000];
        char *actualcmd = malloc(10000 * sizeof(char));

        strcpy(cmdarray, cmd);
        for( i = 0; array[i]!= NULL; i++)
        {
                strcpy(arraystore, array[i]);
                strcat(arraystore, cmdarray);
               if(stat(arraystore, &buf) == 0)
               {
                strcpy(actualcmd, arraystore);
                return (actualcmd);
               }
        }
        if((isspace(cmd[0]) && isspace(cmd[1])))
        {
        free(actualcmd);
        exit(errno);
        }
        else
        {
        free(actualcmd);
        return (cmd);
        }
}
