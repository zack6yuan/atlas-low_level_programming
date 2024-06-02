#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer if found, if not, null
*/

char *_strchr(char *s, char c)
{
int x;

for (x = 0; s[x] != '\0'; x++) /*until reaches null*/
{
    if (s[x] == c)
    return (s + x); /*if found, returns pointer*/
}
return ('\0'); /*null if not found*/
}
