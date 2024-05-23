#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times underscore is printed
*/

void print_line(int n)
{
if (n <= 0) /*if 0, prints "/n"*/
{
_putchar('\n');
}
else
{
int x;
for (x = 1; x <= n; x++)
{
_putchar('_');/*prints the underscore*/
}
_putchar('\n');
}
}
