#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes
 * Return: pointer of concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int x = 0;
int y = 0;
int length;
char *pointer;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[x]) /*calculate length*/
x++;
while (s2[y]) /*calculate length*/
y++;

length = x + y;

pointer = malloc(sizeof(char) * length + 1); /*malloc statement*/

if (pointer == NULL)
return (NULL);

for (x = 0; x < length; x++) /*calculate length*/
{
if ((unsigned int)x < n)
pointer[x] = s1[x];
else
pointer[x] = s2[x - n];
}
pointer[length] = '\0'; /*null terminate*/
    
return (pointer); /*return pointer*/
}
