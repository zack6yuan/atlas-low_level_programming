#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @seperator: the string to be printed between the strings
 * @n: number of strings passed into the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
char *string;

va_list digits;
va_start(digits, n);

for (x = 0; x < n; x++)
{
string = va_arg(digits, char *);
if (string == NULL) /*parameter*/
{
string = "(nil)";
}
else
{
printf("%s", string); /*print string value*/
}

if (x < n - 1 && separator != NULL)
{
printf("%s", separator); /*print the seperator*/
}
}
va_end(digits);
printf("\n"); /*newline character*/
}
