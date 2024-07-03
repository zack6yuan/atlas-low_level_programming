#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list pointer
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int counter = 0; /*counter for nodes*/

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n"); /*parameter*/
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str); /*strlen + str*/
		}
		counter++;
		h = h->next;
	}
	return (counter);
}

