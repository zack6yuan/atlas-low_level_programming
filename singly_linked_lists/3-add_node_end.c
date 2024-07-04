#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list_t list
 * @str: string being stored
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *list2 /*new pointer to list_t*/
unsigned int x; /*counter for loop*/
unsigned int length; /*used to store input strlen*/

list2 = malloc(sizeof(list_t)); /*malloc statement*/
if (!list2) /*check if malloc was successful*/
{
return (NULL);
}



