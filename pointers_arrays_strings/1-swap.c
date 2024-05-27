#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the value of two integers
* @a: the first integer
* @b: the second integer
* Return: void
*/

void swap_int(int *a, int *b)
{
int x;
{
x = *a; /*x is assigned to the pointer of a*/
*a = *b; /*the pointer a is assigned to the pointer b*/
*b = x;/*the pointer b is assigned back to x, switching them*/
}
}
