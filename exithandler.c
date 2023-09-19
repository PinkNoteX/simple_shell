#include "main.h"
/**
 * exithandler - handles the exit command
 * @av: args array.
 * @exitval: value to exit with
 * @enterpath: the path the programs launched with
 * @exitbool: exit bool
 * @counter: number of loops the program went through
 * @Paths: paths array.
 * @userinput: userinput
 * Return: void
 */
void exithandler(char **av, int exitval, char *enterpath, int exitbool,
int counter, char **Paths, char *userinput)
{
int exitvalue = 0;
char buf[80], *end;
int LengthUsed = sprintf(buf, "%d", counter);
exitbool = 1;

if (av[1] != NULL)
{
exitvalue = strtol(av[1], &end, 10);
if (end == av[1] || *end != '\0' || errno == ERANGE || exitvalue < 0)
{
write(STDERR_FILENO, enterpath, _strlen(enterpath));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, buf, LengthUsed);
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, "exit", 4);
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, "Illegal number: ", 16);
write(STDERR_FILENO, av[1], _strlen(av[1]));
write(STDERR_FILENO, "\n", 1);
exitval = 2;
exitbool = 0; }
else
{
free_array(Paths, 30);
free(userinput);
free_array(av, 100);
exit(exitvalue); }}
if (exitbool == 1)
{
free_array(Paths, 30);
free(userinput);
free_array(av, 100);
exit(exitval); }}