#include "main.h"
#include <stdio.h>

/**
 * _strncar - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: the max number of bytes used
 * Return: the concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
int x = 0;
int y = 0;
while (dest[x] != '\0') /*length of dest*/
{
    x++;
}
while (src[y] != '\0' && y < n)
{
    dest[x] = src[y];
    x++;
    y++;
}
dest[x] = '\0';
return (dest);
}
