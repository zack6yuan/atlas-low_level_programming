#include "main.h"
#include <stdio.h>
/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * print_alphabet - what is being printed
*/
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
