#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string that is being searched
 * @accept: bytes that are being looked for
 * Return: pointer to the byte s that matches, '\0' or null if not found
*/

char *_strpbrk(char *s, char *accept)
{
int x; /*integer for the string s*/
int y; /*integer for the string accept*/

for (x = 0; s[x] != '\0'; x++) 
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y]) /*compares the characters*/
return (s); /*if similar, returns pointer*/
}
}
return ('\0');
}
