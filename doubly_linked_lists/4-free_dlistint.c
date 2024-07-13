#include "lists.h"
/**
* free_dlistint - frees a dlistint_t llist
* @head: the head of the list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
		dlistint_t *ptr; /*pointer for current node*/

		while (head != NULL) /*parameter*/
		{
			ptr = head; /*assign ptr to head*/
			head = head->next; /*next node*/
			free(ptr); /*free memory*/
		}
}
