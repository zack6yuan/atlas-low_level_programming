#include "main.h"

/*
 * _puts - a function that prints a string, followed by a new line
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++) /*for loop, runs until reaching null*/
{
_putchar (str[x]); /*prints the string*/
}
_putchar ('\n');
}
