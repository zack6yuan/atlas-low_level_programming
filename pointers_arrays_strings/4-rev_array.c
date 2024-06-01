#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the first integer
 * @n: the second integer
 * Return: the reversed array
 */

void reverse_array(int *a, int n)
{
int x = 0;
int y;

for (x = 0; x < n; x++)
{
y = a[i];
a[i] = a[n];
a[n] = y;
y--; /*reverse interation through the array*/
}
}