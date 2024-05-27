#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line
 * @s: the input for the string
 * Return: void
*/

void print_rev(char *s)
{
int x;
int length = 0;
for (x = 0; s[x] != '\0'; x++) /*for loop, runs until reaching null*/
length++;
for (x = length -1; x >= 0; x--) /*iterates in reverse*/
_putchar(s[x]);
_putchar('\n');
}
