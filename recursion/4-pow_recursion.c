#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: the result of the equation
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1); /*return -1 if y < 0*/
}
if (y == 0)
{
return (1); /*return 1 if y == 0*/
}
if (y >= 1)
{
return (x * _pow_recursion(x, y - 1));
}
return (0);
}
