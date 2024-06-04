#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @src: the source
 * @dest: the destination
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
    int x = 0;
    int y = 0;

    while (dest[x] != '\0')/*length of dest*/
    {
        x++;
    }
    while (src[y] != '\0')/*length of src*/
    {
        dest[x] = src[y]; /*concatenate*/
        x++;
        y++;
    }

    dest[x] = '\0';
    return (dest);
}
