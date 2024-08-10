#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/**
 * binary_search - searches for a value in a sorted array...
 * of integers using the Binary Search Algorithm.
 * @array: a pointer to the first element of the array to seach in.
 * @size: the number of elements in "array."
 * @value: the value to search for.
 * Return: the index where value is located.
 * -1 if value is not present in array, or is array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
size_t left_index = 0;
size_t mid_index;
size_t right_index = size - 1;

if (!array) /*check if array is NULL*/
{
return (-1); /*error*/
}
while (left_index <= right_index) /*binary search loop*/
{
print_array(array, left_index, right_index); /*calls function below*/
mid_index = (left_index + right_index) / 2; /*calculate mid index*/

if (array[mid_index] < value) /*if left*/
{
left_index = mid_index + 1; /*move to mid*/
}
else if (array[mid_index] > value) /*if right*/
{
right_index = mid_index - 1; /*move to mid*/
}
else
{
return (mid_index); /*return index*/
}
}
return (-1); /*not found*/
}

/**
 * print_array - print array of integers
 * @array: the array of integers
 * @start: index to be printed
 * @end: index to be printed
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
size_t index;

printf("Searching in array: ");
for (index = start; index <= end; index++) /*loop from start to end*/
{
if (index != start) /*check if first element*/
{
printf(", "); /*seperate elements*/
}
printf("%d", array[index]); /*prints current element*/
}
printf("\n"); /*newline*/
}
