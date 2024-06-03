#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: parameter
 * Return: length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
unsigned int x;
unsigned int y;
for (x = 0; s[x] != '\0'; x++) /*iterates through s*/
{
    for (y = 0; accept[y] != '\0'; y++) /*iterates through accept*/
    {     
        if (s[x] == accept[y])
        {
            length++;
            break;
        }
    }
}
return (length);
}
