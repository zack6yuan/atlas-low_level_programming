#include <stdio.h>
#include "lists.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the given number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int digit;
int x;

if (!b)
{
return (0);
}
if ((*b != 0) || (*b != 1))
{
return (0);
}
}