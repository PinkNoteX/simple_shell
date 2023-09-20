#include "main.h"

/**
 * main - main function
 * @ac: number of args.
 * @av: pointer to pointer to char.
 * @env: env array.
 * Return: exitval
 */
int main(int __attribute__((unused)) ac, char **av, char **env)
{
char *in, *P, *cmd = ":) ", **Paths = malloc(30 * sizeof(char *)), *act, *ep;
int az = 100, counter = 1, exitval = 0, ws = 0, pipefd[2], exitbool = 0, pid;
ep = av[0];
while (1)
{
pipe(pipefd);
if (isatty(STDIN_FILENO) != 0)
write(STDOUT_FILENO, cmd, 3);
in = userin(exitval, Paths);
if (_strcmp(in, " ") != 0)
{
av = split(in, " ", &az);
echocheck(av);
P = _getenv("PATH");
if (P == NULL)
{
P = malloc(18);
_strcpy(P, "/bi:/ubins");
Path_Tokenizer(P, Paths);
free(P); }
else
Path_Tokenizer(P, Paths);
av = commentche(av);
if (av[0] != NULL)
{
if (_strcmp(av[0], "exit") == 0)
exitval = exithandler(av, exitval, ep, exitbool, counter, Paths, in);
else
{
act = cmdchecker(Paths, av[0], &exitval);
if (act != NULL)
pid = fork();
if (pid == 0)
chcmd(av, act, env, ep, counter, pipefd); }
wait(&ws);
ws = WEXITSTATUS(ws);
exitval = piped(pipefd, ws, av, exitval);
counter++; }}}
free_helper(in, Paths, av);
return (exitval); }
