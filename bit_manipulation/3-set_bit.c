#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number being changed
 * @index: the index of the bit
 * Return: 1 if successful, otherwise, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63) /*max val for (-) long int*/
{
return (-1); /*if error*/
}
*n = *n | (1 << index); /*sets bit at index */
return (1); /*if successful*/
}
