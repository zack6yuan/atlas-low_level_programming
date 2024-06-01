#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the integers
 * @n: the elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int x;
int y;
for (x = 0; x < n / 2; x++) /*half of the array*/
{
y = a[x];
a[x] = a[n - x - 1];
a[n - x - 1] = y; /*reverses the array*/
}
}
