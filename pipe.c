#include "main.h"
/**
 * piped - gets value from child process
 * @pipefd: piped array
 * @waitstatus: the status of the wait
 * @av: args array
 * @exitval: exit value
 * Return: exitval
 */
int piped(int pipefd[], int waitstatus, char **av, int exitval)
{
if (_strcmp(av[0], " ") == 0)
exitval = 0;
else
{
if (exitval != 2)
{
close(pipefd[1]);
read(pipefd[0], &exitval, sizeof(int));
close(pipefd[0]);
if (waitstatus == 2 && av[0] != 0)
exitval = waitstatus; }}
return (exitval);
}
