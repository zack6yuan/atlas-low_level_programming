#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: pointer top the newly created hash table
 * or...if something goes wrong, returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
                hash_table_t *new_table; /*new table pointer*/
                unsigned long int x; /*used to iterate through table*/

                new_table = malloc(sizeof(hash_table_t)); /*malloc for new_table*/
                if (!new_table) /*if NULL, return NULL*/
                {
                        return (NULL);
                }
                new_table->size = size; 
                new_table->array = malloc(sizeof(hash_node_t *) * size); /*malloc for array*/
                if (!new_table->array) /*if malloc fails*/
                {
                        free(new_table); /*free memory*/
                        return (NULL);
                }
                for (x = 0; x < size; x++) /*iterate through each slot*/
                {
                        new_table->array[x] = NULL;
                }
                return (new_table); /*return new_table*/
}
