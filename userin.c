#include "main.h"

/**
 * userin - Gets user input.
 * @exitval: exit value to exit the program with.
 * @Paths: for free on exit
 * @av: args.
 * @userinput: input.
 * @actcmd: actcommand.
 * @az: arraysize
 * Return: userinput
 */
char *userin(int exitval, char **Paths, char **av, int az)
{
char *userin_s = NULL;
size_t n = 0;
ssize_t nchars;
nchars = getline(&userin_s, &n, stdin);
if (nchars == -1)
{
if (feof(stdin))
{
if (isatty(STDIN_FILENO) == 0)
{
free(userin_s);
free_helperexc(Paths, av, az);
exit(exitval); }
clearerr(stdin);
free(userin_s);
write(STDOUT_FILENO, "\n", 1);
free_helperexc(Paths, av, az);
exit(exitval); }
else
{
if (isatty(STDIN_FILENO) == 0)
{
free(userin_s);
free_helperexc(Paths, av, az);
exit(exitval); }
free(userin_s);
write(STDOUT_FILENO, "\n", 1);
free_helperexc(Paths, av, az);
exit(exitval); }}
if ((userin_s)[nchars - 1] == '\n')
{
(userin_s)[nchars - 1] = '\0';
--nchars; }
if (nchars == 0)
{
_strcpy(userin_s, " ");
return (userin_s); }
else
{
return (userin_s); }}
