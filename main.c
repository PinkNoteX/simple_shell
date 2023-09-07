#include "main.h"

int main(void)
{
	char *cmd = ":) ";
	char *userinput;
	size_t n = 0;
	ssize_t nchars;
	while (1)
	{
		printf("%s",cmd);
		nchars = getline(&userinput, &n, stdin);
		
		if (nchars == -1)
		{
			printf("\n");
			free (userinput);
			return (-1);
		}
	printf("%s", userinput);
	}
	free(userinput);
	return (0);
}
