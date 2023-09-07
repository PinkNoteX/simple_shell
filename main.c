#include "main.h"

int main(void)
{
	char *cmd = ":) ";
	char *userinput;
	size_t n = 0;
	ssize_t nchars;
	char **sarray = malloc(15 * sizeof(char *));
	int i = 0;
	  
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
	tokeniser(userinput,sarray);
	for (i = 0; i < 15; i++)
        {
        if(sarray[i] != NULL)
    	{
        printf("%s\n", sarray[i]);
    	}
    	else
    	{
        break;
    	}
        }
	}
	for (i = 0; i < 15; i++)
        {
        free(sarray[i]);
        }
	free(sarray);
	free(userinput);
	return (0);
}
