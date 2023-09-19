#include "main.h"
/**
 * free_helper - frees inputs
 * @userinput: userinput
 * @Paths: paths array.
 * @av: args array.
 * Return: void
 */
void free_helper(char *userinput, char **Paths, char **av)
{
free_array(Paths, 30);
free(userinput);
free_array(av, 100);
}
