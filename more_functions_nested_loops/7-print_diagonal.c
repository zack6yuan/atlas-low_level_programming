#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character is printed
 * Return: void
*/

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n'); /*new line if n <= 0*/
}
else
{
int a;
int b;
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' '); /*for spacing*/
}
_putchar('\\'); /*two \'s used to print \, not escape charcater*/
_putchar('\n');
}
}
}
