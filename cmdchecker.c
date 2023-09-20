#include "main.h"
/**
 * cmdchecker - checks if the command does exist in path.
 * @array: array of the PATH enviroment tokenized
 * @cmd: command to check for.
 * @exitstatus: exit status value.
 * Return: actualcmd on sucess or old command if failure.
 */
char *cmdchecker(char **array, char *cmd, int *exitstatus)
{
int i;
struct stat buf;
char cmdarray[10000], arraystore[10000];
char *actualcmd = malloc(100 * sizeof(char));
_strcpy(cmdarray, cmd);
for (i = 0; array[i] != NULL; i++)
{
if (cmdarray[0] != '/')
{
_strcpy(arraystore, array[i]);
_strcat(arraystore, cmdarray); }
else
_strcpy(arraystore, cmdarray);
if (stat(arraystore, &buf) == 0)
{
_strcpy(actualcmd, arraystore);
*exitstatus = 0;
return (actualcmd); }}
free(actualcmd);
return (cmd); }
