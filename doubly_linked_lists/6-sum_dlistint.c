#include "lists.h"
/**
* sum_dlistint - returns the sum of all the
* data (n) of a dlistint_t linked list.
* @head: the head of the list
* Return: the sum of all the data (n) of a dlistint_t linked list,
*         or NULL if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
