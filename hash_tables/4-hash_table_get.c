#include "hash_tables.h"
#include <string.h>
/**
* hash_table_get - retrieves a value associated with a key
* @ht: the hash table to look into
* @key: the key being searched for
* Return: the value associated with the element
* or NULL if key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
		unsigned long int idx;
		hash_node_t *node;

                if (ht == NULL || key == NULL)
                {
                        return (NULL);
                }
                idx = key_index((const unsigned char *) key, ht->size);
                node = ht->array[idx];

                while (node) /*while node != NULL*/
                {
                        if (strcmp(node->key, key) == 0)
                        {
                                return (node->value); /*return value*/
                                node = node->next; /*next node*/
                        }
                }
                return (NULL); /*if key is not found*/
}
