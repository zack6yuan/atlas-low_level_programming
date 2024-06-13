#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of the array
 * @c: specific char initialized
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    char *array; /*pointer to array*/
    unsigned int x; /*used to iterate through array*/

    if (size == 0) /*NULL if size == 0*/
    {
        return (NULL);
    }

    array = malloc(sizeof(char) * size);
    
    if (array == NULL) /*if NULL, return NULL*/
    {
        return (NULL);
    }
    for (x = 0; x < size; x++); /*iteration through array*/
    {
        array[x] = c;
    }
    return(array); /*return pointer*/
}
