#include "main.h"
char *userin(int ret)
{
	char *userin_s;
	size_t n = 0;
	ssize_t nchars;

	nchars = getline(&userin_s, &n, stdin);
	if (nchars == -1)
	{
		printf("\n");
		free(userin_s);
		exit(0);
	}
	return (userin_s);
}
