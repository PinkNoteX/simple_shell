#include "main.h"
/**
 * free_array - frees an array of pointer to chars.
 * @array: array to be freed
 * @arraysize: size of array to be freed.
 * Return: void
 */
void free_array(char **array, int arraysize)
{
int i = 0;

for (i = 0; i < arraysize; i++)
{
free(array[i]); }
}

/**
 * _strchr - does the same task as the strchr function.
 * @str: str to to be scanned
 * @c: char to be searched for
 * Return: pointer to the first occurrence or NULL.
 */
char *_strchr(const char *str, int c)
{
while (*str != '\0')
{
if (*str == c)
{
return ((char *) str); }
str++; }
return (NULL); }
/**
 * _strlen - gets the length of a string
 * @str: str to get the length of.
 * Return: length.
 */

size_t _strlen(const char *str)
{
size_t length = 0;
while (str[length] != '\0')
{
length++; }
return (length); }

/**
 * _strncmp - does the same task as the strncmp function.
 * @s1: first string to compare
 * @s2: second string to comapre to
 * @n: most num of bytes to compare
 * Return: 0 on success
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
size_t i;
for (i = 0; i < n; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0); }}
return (0); }
