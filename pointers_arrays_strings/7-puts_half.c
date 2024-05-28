#include "main.h"

/**
 * puts_half - prints the second half of a string, and a new line
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
int x; 
int y; /*used to get the second half of the string*/
int length;

for (x = 0; str[x] != '\0'; x++) /*finds the length of the string*/
length++;
y = length / 2; 
if (length % 2 != 0) /*used to round up if the length is odd*/
y++; 
for (x = y; str[x] != '\0'; x++)
_putchar(str[x]);
_putchar('\n');
}
