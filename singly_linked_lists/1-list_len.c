#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: list pointer
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	int counter = 0; /*counter for elements*/

	while (h != NULL)
	{
		count++; /*increment the counter*/
		h = h->next; /*move to next node*/	
	}
	return (count);
}

