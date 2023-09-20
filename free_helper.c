#include "main.h"
/**
 * free_helper - frees inputs
 * @userinput: userinput
 * @Paths: paths array.
 * @av: args array.
 * @av: actual command.
 * Return: void
 */
void free_helper(char *userinput, char **Paths, char **av, char *actcmd, int az)
{
free_array(Paths, 30);
if(actcmd != NULL && _strcmp(actcmd, userinput) != 0)
{
free(actcmd);
}
free(userinput);
free_array(av, az);
}
