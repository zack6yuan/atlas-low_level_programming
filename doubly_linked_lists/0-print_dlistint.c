#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of the list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
            int nodes = 0; /*counter for nodes*/

            while (h != NULL) /*parameter*/
            {
                        printf("%d\n", h->n); /*print the element's value*/
                        nodes++; /*increment the counter*/
                        h = h->next; /*move to the next node*/
            }
            return (nodes); /*return nodes*/
}
