#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string that is being printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
_putchar('\n'); /*new line if null*/
}
else
{
_print_rev_recursion(s + 1); /*recursive call first for reverse*/
_putchar(*s); /*prints string*/
}
