#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the head of the listint_t list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *node;
int data;

if (*head == NULL) /*parameter*/
{
return(0);
}

node = *head; /*set node to the head*/
data = node->n; /*head node's data set to "data"*/
*head = (*head)->next; /*set head to next node*/
free(node); /*free*/

return (data); /*return head node's data*/
}
