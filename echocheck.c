#include "main.h"

void echocheck(char **av)
{
	int i = 1, r = 0;
	char *cmd;

	if (av)
{
	cmd = av[0];
}

	if (strcmp(cmd, "echo") == 0 ||
	strcmp(cmd, "/bin/echo") == 0 ||
	strcmp(cmd, "/usr/bin/echo") == 0)
{

	while (av[i] != NULL)
{
	while (av[i][r] != '\0')
{
	if (av[i][r] == '"' || av[i][r] == '\'')
{
	removeChar(av[i], '"', '\'');
}
	r++;
}
	i++;
}
	i = 0;
	if (av[i] != NULL && av[i + 2] != NULL)
{
	removefirstspace(av[2]);
}
}
}
