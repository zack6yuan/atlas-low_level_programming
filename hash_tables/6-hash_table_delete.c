#include "hash_tables.h"
#include <stdlib.h>
/**
* hash_table_delete - deletes a hash table
* @ht: the hash table
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
                hash_node_t *temp_node;
                hash_node_t *next_node;
                unsigned int x;

                if (ht == NULL)
                {
                        return; /*return nothing*/
                }
                for (x = 0; x < ht->size; x++)
                {
                        temp_node = ht->array[x];
                        while (temp_node != NULL) /*parameter*/
                        {
                                next_node = temp_node->next;
                                free(temp_node->key); /*free the key*/
                                free(temp_node->value); /*free the value*/
                                free(temp_node); /*free temp node*/
                                temp_node = next_node; /*temp = next*/
                        }
                }
                free(ht->array); /*free the array*/
                free(ht); /*free the hash table*/
}
