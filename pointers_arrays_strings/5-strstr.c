#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring
* @haystack: where we are searching
* @needle: subsstring being searched for
* Return: the located substring, NULL if not found
*/

char *_strstr(char *haystack, char *needle)

int x; /*variable for haystack*/
int y; /*variable for needle*/

if (needle == '\0') /*if needle is not found, null*/
{
return (haystack);
}
while (x = 0; haystack[x] != '\0'; x++)
{
while (y = 0; needle[y] != '\0'; y++)
