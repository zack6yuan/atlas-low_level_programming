#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array of elements
 * @size: the number of bytes allowed
 * Return: pointer, NULL is malloc fails or if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointer;
unsigned int x;
if ((size == 0) || (nmemb == 0)) /*condition if size or nmemb == 0*/
return (NULL);
pointer = malloc(size * nmemb); /*calculates number of bytes for array*/
if (pointer == NULL) /*check if malloc was successful*/
return (NULL);
for (x == 0; x < (size * nmemb); x++;) /*ensures malloc is set to 0*/
pointer[x] = 0;
return (pointer); /*if successful, return pointer*/
}
