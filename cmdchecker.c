#include "main.h"
char *cmdchecker(char **array, char *cmd)
{
        int i;
        struct stat buf;
        char cmdarray[150];
        char arraystore[150];
        char *actualcmd = malloc(150 * sizeof(char));

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
        free(actualcmd);
        return (cmd);
}
