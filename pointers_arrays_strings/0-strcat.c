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
    int x;
    int y;
    for (x = 0; dest[x] != '\0'; x++) /*length of dest*/
    for (y = 0; src[y] != '\0'; y++) /*length of src*/
    {
        dest[x] = src[y];
    {
        dest[x] = '\0';
        return (dest);
}
