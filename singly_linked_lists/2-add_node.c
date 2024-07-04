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
    list_t *list2; /*new pointer to list_t*/
    unsigned int x; /*counter for loop*/
    unsigned int length = 0; /*used to store input strlen*/

    list2 = malloc(sizeof(list_t)); /*malloc statement*/
    if (!list2) /*check if malloc was successful*/
    {
        return (NULL);
    }
    for (x = 0; str[x] != '\0'; x++)
    {
        length++;
    }
    list2->str = strdup(str); /*duplicates string + assigns to list2*/
    list2->len = length; /*assigns length to list2*/
    list2->next = *head; /*new node head (beginning)*/
    *head = list2; /*head = new node*/

    return (*head);
}
