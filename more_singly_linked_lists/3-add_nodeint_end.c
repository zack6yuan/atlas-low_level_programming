#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of the listint_t list
 * @n: added to value of newnode
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode; /*the new node*/
listint_t *lastnode; /*the last node*/

newnode = malloc(sizeof(listint_t)); /*malloc*/

if (newnode == NULL) /*check if malloc worked*/
{
return (NULL);
}

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
    {
        *head = newnode; /*set newnode to head if empty*/
    }
    else
    {
        lastnode = *head;
    }
    while (lastnode->next != NULL) /*find the last node*/
    {
        lastnode = lastnode->next;
    }
    lastnode->next = newnode; /*set newnode to the end*/
    
    return (newnode);
}