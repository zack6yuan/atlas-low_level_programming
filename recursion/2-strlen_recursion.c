#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
if (*s != '\0') /*if NULL*/
{
return (1 + _strlen_recursion(s + 1)); /*1 for char; recursive call*/
}
else
{
return (0);
}
}
