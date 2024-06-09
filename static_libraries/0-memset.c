#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area where the pointer will go
 * @b: copied character
 * @n: number of bytes of memory
 * Return: a pointer that points to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++) /*for loop for bytes*/
{
s[x] = b; /*assigns b to s*/
}
return (s); /*returned pointer*/
}
