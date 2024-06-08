#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string that is being printed
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n'); /*new line if null*/
}
else    
{
_putchar(*s); /*prints string*/
_puts_recursion(s + 1); /*recursive call*/
}
}
