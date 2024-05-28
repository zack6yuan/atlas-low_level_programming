#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies the string pointed to by src, including the
* terminating null byte (/0), to the buffer pointed to by dest
* @src: where we are copying from
* @dest: where we are copying to
* Return: 0
*/

char *_strcpy(char *dest, char *src)
{
int x;
for (x = 0; src[x] != '\0'; x++)
dest[x] = src[x]; /*copies from src to dest*/
dest[x] = '\0';
return (dest);
}
