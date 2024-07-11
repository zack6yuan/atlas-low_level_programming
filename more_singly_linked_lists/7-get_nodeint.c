#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head:
 * @index:
 * Return: the nth node of a listint_t list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x;
listint_t *node;

if (head == NULL) /*parameter*/
{
return (NULL);
}
node = head /*set node to head*/

for (x = 0; x < index; x++)
{
if (node == NULL)
{
return (NULL);
}
node = node->next;
}
return (node);
}
