#include "main.h"

/**
 * userin - Gets user input.
 * @exitval: exit value to exit the program with.
 * @Paths: for free on exit
 * Return: userinput
 */
char *userin(int exitval, char **Paths)
{
char *userin_s;
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
free_array(Paths, 30);
exit(exitval); }
clearerr(stdin);
write(STDOUT_FILENO, "\n", 1);
free_array(Paths, 30);
exit(exitval); }
else
{
if (isatty(STDIN_FILENO) == 0)
{
free(userin_s);
free_array(Paths, 30);
exit(exitval); }
free(userin_s);
write(STDOUT_FILENO, "\n", 1);
free_array(Paths, 30);
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
return (userin_s); }
