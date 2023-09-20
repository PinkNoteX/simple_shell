#include "main.h"
/**
 * _memset - memory set.
 * @ptr: variable
 * @value: value of alloc
 * @num: num
 * Return: ptr
 */
void *_memset(void *ptr, int value, size_t num)
{
unsigned char  *p = ptr;
size_t i;
for (i = 0; i < num; i++)
{
p[i] = (unsigned char)value;
}
return (ptr);
}
/**
 * free_arrayex - frees an array of pointer to chars.
 * @array: array to be freed
 * @arraysize: size of array to be freed.
 * Return: void
 */
void free_arrayex(char **array, int arraysize)
{
int i = 0;

for (i = 0; i < arraysize; i++)
{
free(array[i]);
array[i] = NULL;
}
free(array);
array = NULL;
}
