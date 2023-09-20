#include "main.h"
/**
 * free_helper - frees inputs
 * @userinput: userinput
 * @Paths: paths array.
 * @av: args array.
 * @actcmd: actual command.
 *  @az: arraysize
 * @counter: counter.
 * Return: void
 */
void free_helper(char *userinput, char **Paths, char **av,
char *actcmd, int az, int counter)
{
if (counter > 2)
{
free_array(Paths, 30);
if (actcmd != NULL && _strcmp(actcmd, userinput) != 0)
{
free(actcmd);
actcmd = NULL;
}
free(userinput);
userinput = NULL;
free_array(av, az);
}}
/**
 * free_helperexc - frees inputs
 * @userinput: userinput
 * @Paths: paths array.
 * @av: args array.
 * @actcmd: actual command.
 *  @az: arraysize
 * Return: void
 */
void free_helperexc(char *userinput, char **Paths,
char **av, char *actcmd, int az)
{
free_arrayex(Paths, 30);
free(actcmd);
actcmd = NULL;
free(userinput);
userinput = NULL;
free_arrayex(av, az);
}
