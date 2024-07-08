#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n:
 * @index:
 * Return: 1 if successful, otherwise, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63) /*max val for (-) long int*/
{
return (-1); /*error*/
}
*n = *n & ~(1 << index); /*shifts and inverts*/
return (1); /*return 1*/
}