#include "main.h"
void free_array(char **array, int arraysize)
{
	int i = 0;
	for(i = 0; i < arraysize; i++)
	{
		free(array[i]);
	}
	free(array);
}

