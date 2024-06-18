#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string 
 * @s2: the second string
 * Return: s1 followed by s1, and empty string if NULL
 */
char *str_concat(char *s1, char *s2)
{
char *pointer;
int x = 0; /*iteration thorough s1*/
int y = 0; /*iteration thorough s2*/
int size1 = 0; /*size of s1*/
int size2 = 0; /*size of s2*/

while (s1[size1] != NULL) /*while not null, iterate*/
size1++; 
while (s2[size2] != NULL) /*while not null, iterate*/
size2++;
pointer = malloc(sizeof(char)*(size1 + size2 + 1)); /*concat strings + space for NULL*/
if (pointer == NULL)
return (NULL);

for (x = 0; x < size1; x++)
{
pointer[x] = s1[x]; /*copy into pointer*/
}

for (y = 0; y < size2; y++)
{
pointer[x + y] = s2[y];
}
pointer[x + y] = '\0'; /*null terminate*/
return (pointer); /*return pointer*/
}
