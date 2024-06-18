#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns pointer to new space in memory
 * @str: the string
 * Return: pointer to new string, NULL if insufficient memory
 */
char *_strdup(char *str)
{
int x; /*for loop iteration*/
int length = 0; /*for length*/
char *pointer; /*pointer that will be returned*/

if (str == NULL) /*parameter if str == NULL*/
{
return (NULL);
}

while (str[length]) /*iterate to count length*/
{
length++;
}

pointer = malloc((length + 1) * sizeof(char)); /*memory + space for NULL*/

if (pointer == NULL)
{
return (NULL);
}

for (x = 0; x < length; x++)
{
pointer[x] = str[x]; /*copy*/
}

return (pointer); /*return pointer*/
}
