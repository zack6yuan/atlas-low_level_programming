#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the list_t list
 * @str: string being stored
 * Return: address if the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{

