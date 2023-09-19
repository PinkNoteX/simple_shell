#include "main.h"

/**
 * cmdexc - excute the command.
 * @av: args array.
 * @actcmdd: the actual command
 * @env: the env array.
 * @enterpath: path program launched through.
 * @counter: the count of loops that passed
 * @exitpipe: pipe to pass a value to main process.
 * Return: void
 */
void cmdexc(char **av, char *actcmdd, char **env,
char *enterpath, int counter, int exitpipe[2])
{
char *cmdd = NULL, buffer[32], PATH[32] = "/bin/";
int i, x, exitva = 0;
char buf[80];
int LengthUsed = sprintf(buf, "%d", counter);

if (av)
{
cmdd = av[0];
x = _strlen(cmdd) + 1; }
for (i = 0; i < x; i++)
{
buffer[i] = cmdd[i]; }
if (buffer[0] != '/')
_strcpy(PATH, actcmdd);
else
_strcpy(PATH, buffer);
close(exitpipe[0]);
if (buffer[0] != '\0')
{
if (execve(PATH, av, env) == -1)
{
write(STDERR_FILENO, enterpath, _strlen(enterpath));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, buf, LengthUsed);
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, actcmdd, _strlen(actcmdd));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, "not found\n", 10);
exitva = 127;
write(exitpipe[1], &exitva, sizeof(int));
close(exitpipe[1]);
exit(EXIT_FAILURE); }}}
