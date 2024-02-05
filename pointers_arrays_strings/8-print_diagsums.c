#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix.
 * @a: 2D array representing the square matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
    int i, sum1 = 0, sum2 = 0;

    for (i = 0; i < size * size; i += size + 1)
        sum1 += a[i];

    for (i = size - 1; i <= (size * size) - size; i += size - 1)
        sum2 += a[i];

    printf("%d, %d\n", sum1, sum2);
}
