#include "lists.h"
/**
 * free_listint2 - frees a listint_t list, the function sets the head to NULL
 * @head: the head of the listint_t list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *node;

if (head == NULL) /*parameter*/
{
return;
}
while (*head != NULL)
{
node = *head;
*head = (*head)->next;
free(node);
}
*head = NULL; /*head is set to NULL*/
}
