#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/**
 * linear_search - searches for a value in an array...
 * of integers using the Linear Search Algorithm.
 * @array: a pointer to the first element of the array to seach in.
 * @size: the number of elements in "array."
 * @value: the value to search for.
 * Return: the first index where "value" is located
 * -1 if value is not present in array, or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
        size_t i; /*counter*/

        if (!array)
        {
                return (-1); /*error*/
        }
        for (i = 0; i < size; i++); /*loop through array*/
        {
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);
                if (array[i] == value)
                {
                        return (i); /*return index*/
                }
        }
}
