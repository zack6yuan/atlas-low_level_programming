#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: the head of the list
* @n: value to be assigned to new node
* Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
		dlistint_t *new_node;
		dlistint_t *temp_node;

		new_node = malloc(sizeof(dlistint_t)); /*allocate memory*/
		if (!new_node) /*parameter if NULL*/
                {
				return (NULL);
		}
                new_node->n = n; /*val of new_node to n*/
                new_node->next = NULL; /*val of next to NULL*/

                if (!*head) /*if list is empty*/
                {
                        new_node->prev = NULL; /*set prev to NULL*/
                        *head = new_node; /*updates head of list*/
                        return (new_node); /*return new node*/
                }
                temp_node = *head; /*initialize temp_node to head*/
				while (temp_node->next) /*iterates through list*/
                {
                        temp_node = temp_node->next;
                }
                temp_node->next = new_node; /*set next  to new*/
                new_node->prev = temp_node; /*set prev  to temp*/

                return (new_node); /*return address of new element*/
}
