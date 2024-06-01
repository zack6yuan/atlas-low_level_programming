#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: the first compared string
 * @s2: the second compared string
 * Return: the result of the compared strings
 */

int _strcmp(char *s1, char *s2)
{
int x;
while (s1[x] != '\0' && s2[x] != '\0')
{
if (s1[x] != s2[x]) /*condition*/
{
return (s2[x] - s1[x]); 
}
x++ /*iteration*/
}
return (0);
}
