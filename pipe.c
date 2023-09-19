#include "main.h"
/**
 * piped - gets value from child process
 * @pipefd: piped array
 * @waitstatus: the status of the wait
 * Return: exitval
 */
int piped(int pipefd[], int waitstatus)
{
int exitval;
close(pipefd[1]);
read(pipefd[0], &exitval, sizeof(int));
close(pipefd[0]);

if (waitstatus == 2)
exitval = waitstatus;
return (exitval);
}
