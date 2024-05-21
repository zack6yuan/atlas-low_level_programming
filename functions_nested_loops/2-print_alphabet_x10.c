#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: 0
*/

void print_alphabet_x10(void)
{
char c;
    int x = 0; 

while (x <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
x++;
}
}
