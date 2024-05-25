#include "main.h"

/**
* print_square - prints a square, followed by a new line
* @size: the size of the square, length and width
* Return: void
*/

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n'); /*new line if n <= 0*/
}
else
{
int a;
int b;
for (a = 0; a < size; a++) /*for loop for width*/
{
for (b = 0; b < a; b++) /*for loop for length*/
{
_putchar('#'); /*prints the # character*/
}
_putchar('\n');
}
}
}