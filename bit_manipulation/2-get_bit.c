#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the given number
 * @index: index to find
 * Return: value of a the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value;

if (index > 63) /*max val for (-) long int*/
{
return (-1); /*error*/
}
return ((n >> index) & 1); /*calculate value of bit at index*/
}
