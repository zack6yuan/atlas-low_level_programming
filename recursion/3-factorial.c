#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 * Return: -1 if  n < 0
 */
int factorial(int n)
{
if ((n == 0) || (n == 1))
{
return (1); /*returns factorial of 0 or 1*/
}
if (n < 0)
{
return (-1); /*error indicated*/
}
return (n * factorial(n - 1)); /*number multiplied by recursive for factorial*/
}
