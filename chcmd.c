#include "main.h"
/**
 * chcmd - checks if command is build in or not.
 * @av: args array.
 * @actcmdd: the actual command
 * @env: the env array.
 * @enterpath: path program launched through.
 * @counter: the count of loops that passed
 * @exitpipe: pipe to pass a value to main process.
 * Return: void
 */
void chcmd(char **av, char *actcmdd, char **env,
char *enterpath, int counter, int exitpipe[2]){
char *command;
int i;

command = av[0];
{
if (_strcmp(command, "env") == 0 ||
_strcmp(command, "printenv") == 0)
{
for (i = 0; env[i]; i++)
{
write(STDOUT_FILENO, env[i], _strlen(env[i]));
write(STDOUT_FILENO, "\n", 1); }
exit(0);
}
else if (_strcmp(command, " ") == 0)
exit(errno);
else
cmdexc(av, actcmdd, env, enterpath, counter, exitpipe);
}}
