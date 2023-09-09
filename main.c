#include "main.h"

int main(void)
{
	char **av, *userinput, *cmd = ":) ",
	     **sarray = malloc(25 * sizeof(char *));
	int i = 0,  arraysize = 0, counter = 0;

	while (1)
	{
		printf("%s", cmd);
		userinput = userin();
		tokeniser(userinput, sarray);
		for (i = 0; sarray[i] != NULL; i++)
		{
			arraysize = i + 2; }
		i = 0;
		av = malloc(sizeof(char *) * arraysize);
		while (sarray[i] != NULL)
		{
			av[i] = sarray[i];
			i++; }
		av[i] = sarray[i];
		/*Start Execution*/
		cmdexc(av);
        counter++;
        }
                
	free_array(sarray, 25);
	free_array(av, arraysize);
	free(userinput);
	return (0);
}
