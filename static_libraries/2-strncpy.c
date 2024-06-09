#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: the input value
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
int y = 0;

while (src[y] != '\0' && y < n)
{
dest[y] = src[y]; /*to copy*/
y++;
}
while (y < n) /*parameter for at most n bytes*/
{
dest[y] = '\0';
y++;
}
return (dest);
}
