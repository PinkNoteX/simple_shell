#include "main.h"

/**
 * _strcmp - does the same task as the strcmp function.
 * @str1: first string to compare.
 * @str2: second string to compare.
 * Return: 0 if strcmp succeeds.
 */
int _strcmp(char *str1, char *str2)
{
while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
{
str1++;
str2++; }
if (*str1 == *str2)
return (0);
else
return (*str1 - *str2);
return (0); }

/**
 * _strcpy - does the same task as the strcpy function.
 * @dest: destination to copy to.
 * @source: source to copy from
 * Return: dest
 */
char *_strcpy(char *dest, const char *source)
{
int i = 0;
while (source[i] != '\0')
{
dest[i] = source[i];
i++; }
dest[i] = '\0';
return (dest); }

/**
 * _strcat - does the same task as the strcat function.
 * @s1: string to put at first.
 * @s2: string to add at the end.
 * Return: void
 */
void _strcat(char *s1, const char *s2)
{
while (*s1 != '\0')
{
s1++; }
while (*s2 != '\0')
{
*s1 = *s2;
s1++;
s2++; }
*s1 = '\0'; }

/**
 * _getenv - gets environment variable
 * @name: name of the environment to get.
 * Return: env variable or Null on failure
 */
char *_getenv(const char *name)
{
char **env;
int name_len = _strlen(name);
for (env = environ; *env != NULL; env++)
{
if (_strncmp(name, *env, name_len) == 0 && (*env)[name_len] == '=')
{
return (&(*env)[name_len + 1]); }}
return (NULL); }
