#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: the head of the listint_list
 * @n: new value to be created
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;
if (head == NULL)
{ /*check if empty*/
return (NULL);
}
node = malloc(sizeof(listint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n; /*assign the value of the new node*/
node->next = *head; /*set the new node to head*/
*head = node; /*set the head to the new node*/

return (node); /*return address of the new element*/
}
