#include "main.h"

/**
* print_numbers - prints numbers 0 to 9, followed by a new line
* Return: void
*/

void print_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
{
putchar(n);
}
putchar('\n');
}
