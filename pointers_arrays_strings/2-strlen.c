#include "main.h"
#include <stdio.h>

/**
* _strlen - function that returns the length of a string
* @s: the input for the length of the string
* Return: the length of the string
*/

int _strlen(char *s)
{
int x;
int length = 0; /*stores the string length*/
for (x = 0; s[x] != '\0'; x++) /*runs until reaching null*/
{
length++;
}
return (length);
}
