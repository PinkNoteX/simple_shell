#include "main.h"
int shellui(char *userinput)
{
	*cmd = ":) ";
        size_t n = 0;
        ssize_t nchars;
	printf("%s",cmd);
	nchars = getline(&userinput, &n, stdin);
	if (nchars == -1)
	{
		printf("\n");
		free (userinput);
		return (-1);
	}
	return(userinput);
}
