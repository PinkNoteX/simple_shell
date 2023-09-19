#include "main.h"

/**
 * removeChar - removes spesific characters from string.
 * @str: str to remove characters from.
 * @garbage1: char to remove.
 * @garbage2: another char to remove.
 * Return: void
 */
void removeChar(char *str, char garbage1, char garbage2)
{
char *src, *dst;
for (src = dst = str; *src != '\0'; src++)
{
if (*src != garbage1 && *src != garbage2)
{
*dst = *src;
dst++;
}}
*dst = '\0'; }

/**
 * removefirstspace - Removes first space from string
 * @str: str to remove space from.
 * Return: void
 */
void removefirstspace(char *str)
{
if (str[0] != '\0')
{
_strcpy(str, str + 1); }}
