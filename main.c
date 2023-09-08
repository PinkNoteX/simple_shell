#include "main.h"

int main(void)
{	
	char **av;
	char *cmd = ":) ";
	char *userinput;
	size_t n = 0;
	ssize_t nchars;
	int i = 0;
	int arraysize = 0;
	char **sarray = malloc(15 * sizeof(char *));
	  
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
	for(i = 0; sarray[i] != NULL; i++)
        {
        arraysize = i + 2;
        }
	i = 0;
	av = malloc(sizeof(char *) * arraysize);
	while(sarray[i] != NULL)
        {
                av[i] = sarray[i];
                i++;
        }
        av[i] = sarray[i];
	/*Start Execution*/
	for (i = 0; i < arraysize - 1; i++){
	printf("%s\n",av[i]);
	}
        }
	for (i = 0; i < 15; i++)
        {
        free(sarray[i]);
        }
	for (i = 0; i < arraysize; i++)
        {
        free(av[i]);
        }
	free(sarray);
	free(av);
	free(userinput);
	return (0);
}
