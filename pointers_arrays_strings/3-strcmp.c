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
int x, y;
x = 0;
while (s1[x] == s2[x] && s1[x] != '\0')
{
x++;
}
y = s1[x] - s2[x];
return (y);
}
