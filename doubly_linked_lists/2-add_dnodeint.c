#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: the head of the list
 * @n: value to be assigned to new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
		dlistint_t *new_node; /*ptr to new head*/

		new_node = malloc(sizeof(listint_t)); /*memory allocation*/

		if (new_node == NULL) /*parameter*/
		{
			return (NULL);
		}

}
