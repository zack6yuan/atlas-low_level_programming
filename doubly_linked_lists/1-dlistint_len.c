#include "lists.h"
/**
 * dlistint_len - prints the number of elements of a dlistint_t list
 * @h: the head of the list
 * Return: the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
		    int nodes = 0; /*counter for nodes*/

            while (h != NULL)
			{
				nodes++;
				h = h->next;
			}
			return (nodes);
}
