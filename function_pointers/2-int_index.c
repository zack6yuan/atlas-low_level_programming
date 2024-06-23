#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of elements in the array
 * @cmp: used to compare
 * Return: searched integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x; /*below, if NULL or size <= 0, return -1*/
if ((array == NULL) || (cmp == NULL) || (size <= 0))
{
return (-1);
}
for (x = 0; x < size; x++) /*loop through array*/
{
if (cmp(array[x]) != 0) /*if result of comparison is != 0*/
return (x);
}
return (-1);
}
