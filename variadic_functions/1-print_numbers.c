#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed in between numbers
 * @n: the number of integers passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list digits;
unsigned int x;

va_start(digits, n);
for (x = 0; x < n; x++)
{
printf("%d", va_arg(digits, int));
if (x != (n - 1) && separator != NULL)
{
printf("%s", separator); /*prints the seperator*/
}
}
va_end(digits);
printf("\n"); /*newline character*/
}
