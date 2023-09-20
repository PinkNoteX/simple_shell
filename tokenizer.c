#include "main.h"

/**
 * Path_Tokenizer - does the same task as the strtok function.
 * @string2: str to tokenize.
 * @sarray2: pointer to pointer to char that stores each path indivisually.
 * Return: void
 */
void Path_Tokenizer(char *string2, char **sarray2)
{
int i2 = 0, j2 = 0, n2 = 0;
char word2[150];
char *s2[30], *car = "/";
int k2 = 0;
int r2 = 0;

memset(word2, 0, sizeof(word2));
while (string2[i2] != '\0')
{
if (string2[i2] == ':')
{
word2[j2++] = '/';
word2[j2] = '\0';
s2[n2] = malloc(sizeof(char) * _strlen(word2) + 2);
_strcpy(s2[n2], word2);
j2 = 0;
n2++;
_memset(word2, 0, sizeof(char) * _strlen(word2) + 2); }
else
word2[j2++] = string2[i2];
i2++; }
s2[n2] = malloc(sizeof(char) * _strlen(word2) + 2);
if (n2 == 0)
{
word2[j2++] = '/';
word2[j2] = '\0';
_strcpy(s2[n2], word2); }
else
{
_strcpy(s2[n2], word2);
_strcat(s2[n2], car); }
for (r2 = n2 + 1; r2 < 30; r2++)
s2[r2] = '\0';
for (k2 = 0; k2 < 30; k2++)
sarray2[k2] = s2[k2]; }

/**
 * split - does the same task as the strtok function
 * @string: str to tokenize.
 * @sep: the seperator or the char that indicates a new pointer to char.
 * @sep_count: the number of seperators in the original sting
 * Return: void
 */
char **split(char *string, char *sep, int *sep_count)
{
int i = 0, allocation_size, l;
char *seperators = malloc(_strlen(sep + 2));
char **strings = malloc(100 * sizeof(char *)), buf[17999];
int n = 0;
int len = _strlen(string);

*sep_count = 0;
_strcpy(seperators, sep);
while (i < len)
{
while (i < len)
{
if (_strchr(seperators, string[i]) == NULL)
break;
i++; }
l = 0;
while (i < len)
{
if (_strchr(seperators, string[i]) != NULL)
break;
buf[l] = string[i];
i++;
l++; }
if (l > 0)
{
buf[l] = '\0';
allocation_size = sizeof(char) * (_strlen(buf) + 2);
strings[n] = malloc(allocation_size);
_strcpy(strings[n], buf);
if (n != 0)
if (_strcmp(strings[n - 1], "echo") == 0 ||
_strcmp(strings[n - 1], "/bin/echo") == 0)
{
seperators = malloc(sizeof(char) * 3);
_strcpy(seperators, ""); }
n++; }}
strings[n] = NULL;
*sep_count = n;
free(seperators);
return (strings); }
