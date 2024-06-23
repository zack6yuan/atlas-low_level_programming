#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter
 * @array: array
 * @size: size of the array
 * @action: pointer to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;

if (action != NULL && array != NULL) /*checks if NULL*/
{
for (x = 0; x < size; x++) /*if =! NULL, continue*/
action(array[x]); /*calls function*/
}
}
