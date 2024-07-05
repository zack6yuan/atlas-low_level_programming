#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head of the linked list listint_t
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0; /*counter for nodes*/

while (h != NULL)
{
nodes++; /*increment the counter*/
h = h->next; /*move to the next node*/
}

return (nodes); /*return node count*/
}
