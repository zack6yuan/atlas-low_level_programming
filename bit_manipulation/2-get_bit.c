#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the given number
 * @index: 
 * Return: value of a the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value;

if (index > 63)
{
return (-1);
}
return ((n >> index) & 1);
}
