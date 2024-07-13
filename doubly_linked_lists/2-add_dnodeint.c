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

		new_node = malloc(sizeof(dlistint_t)); /*memory allocation*/

		if (new_node == NULL) /*parameter*/
		{
			return (NULL);
		}

		new_node->n = n; /*assign new node with value*/
		new_node->next = *head; /*set new node to current head*/
		new_node->prev = NULL; /*set prev to NULL*/

	        if (*head != NULL)
		{
				(*head)->prev = new_node;
		}
		*head = new_node; /*assign to head ptr*/

		return (*head); /*return address of new element*/
}
