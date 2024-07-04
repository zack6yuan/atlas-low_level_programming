#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the list_t list
 * Return: void
 */
void free_list(list_t *head)
{
list_t *node; /*pointer to list_t*/
while ((node = head) != NULL)
{
head = head->next; /*moves to next node*/
free(node->str); /*frees str*/
free(node); /*frees the actual node*/
}
}
