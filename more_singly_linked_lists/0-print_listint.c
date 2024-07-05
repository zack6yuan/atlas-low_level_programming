#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the linked list listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t nodes = 0; /*counter for nodes*/

    while (h != NULL)
    {
        printf("%d\n", h->n); /*value of current node*/
        h = h->next; /*move to the next node*/
        nodes++; /*increment the counter*/
    }

    return (nodes); /*return node count*/
}
