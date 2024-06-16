#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function that allocates using malloc
 * returns a pointer to the allocated memory
 * @b: unsigned int
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *pointer; /*stores the memory*/
pointer = malloc(b); /*malloc statement*/
if (pointer == NULL)
exit(98); /*exit status value*/
return (pointer); /*pointer returned to allocated memory*/
}
