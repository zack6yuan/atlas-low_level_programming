#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * Return: the capitalized words of the string
 */

char *cap_string(char *s)
{
int x = 0;

while (s[x])
{
while (!(s[x] >= 'a' && s[x] <= 'z')) /*while not lowercase*/
x++;

if (s[x - 1] == ' ' || /*space*/
s[x - 1] == '\t' || /*tabulation*/
s[x - 1] == '\n' || /*new line*/
s[x - 1] == ',' ||
s[x - 1] == ';' ||
s[x - 1] == '.' ||
s[x - 1] == '!' ||
s[x - 1] == '?' ||
s[x - 1] == '"' ||
s[x - 1] == '(' ||
s[x - 1] == ')' ||
s[x - 1] == '{' ||
s[x - 1] == '}' )
{
if (s[x] >= 'a' && s[x] <= 'z')
s[x] = s[x] - 32; /*lowercase to uppercase using ASCII*/
}
x++;
}
return (s);
}
