#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the pointer
 * Return: void
 */

void puts2(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++) /*length of the string*/
{
if (x % 2 == 0) /*checking for even numbers*/
{
_putchar(str[x]);
}
}
_putchar('\n');
}
