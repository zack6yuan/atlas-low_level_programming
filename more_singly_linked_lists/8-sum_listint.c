#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: the head of the listint_t list
 * Return: the sum of all the data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum_data = 0;
listint_t *node;

if (head == NULL) /*parameter*/
{
return (0); 
}
node = head;

while (node != NULL)
{
sum_data += node->n; /*add current to sum*/
node = node->next; /*move to the next node*/
}
return (sum_data); /*return sum of data*/
}
