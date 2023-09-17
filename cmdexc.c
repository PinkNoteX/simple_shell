#include "main.h"

void cmdexc(char **av, *actcmdd, **env, *enterpath, int counter)
{
	char *cmdd = NULL, buffer[32], PATH[32] = "/bin/";
	int i, x;
	char buf[80];
	int LengthUsed = sprintf(buf, "%d", counter);

	if (av)
{
	cmdd = av[0];
	x = strlen(cmdd) + 1;
}
	for (i = 0; i < x; i++)
{
	buffer[i] = cmdd[i];
}
	if (buffer[0] != '/')
{
	strcpy(PATH, actcmdd);
}
	else
{
	strcpy(PATH, buffer);
}
	if (buffer[0] != '\0')
{
	if (execve(PATH, av, env) == -1)
{
	write(STDERR_FILENO, enterpath, strlen(enterpath));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, buf, LengthUsed);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, actcmdd, strlen(actcmdd));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, "not found\n", 10);
	exit(errno);
}}
}
