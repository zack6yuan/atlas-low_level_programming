#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination of copied memory
 * @src: original location
 * @n: number of bytes
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;

while (x < n) /*bytes*/
{
dest[x] = src[x]; /*copies from src to dest*/
x++;
}
return (dest); /*returned pointer*/
}
