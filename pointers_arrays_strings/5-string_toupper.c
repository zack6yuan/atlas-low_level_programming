#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters 
 * of a string to uppercase using ASCII
 * @s: being converted
 * Return: new string
 */

char *string_toupper(char *s)
{
int x;

while (s[x] != '\0')
{
if (s[x] >= 97 && s[x] <= 122) /* 97 (a) and 122 (z) */
s[x] = s[x] - 32; /*lowercase to uppercase using ASCII*/
x++; 
}
return (0);
}
