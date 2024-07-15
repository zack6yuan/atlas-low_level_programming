#include "hash_tables.h"
/**
* hash_table_set - adds an element to the hash table
* @ht: the hash table to add or update key value to
* @key: the key, that can't be an empty string
* @value: the value associated with the key, that must be duplicated
* Return: 1 if succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
		hash_node_t *current_node = NULL;
		hash_node_t *new_node = NULL;
		unsigned long int idx = 0;
                char *data;

		if (!ht || !key || !*key || !value) /*check if any inputs are NULL*/
                {
                        return (0);
                } /*calculate key index and store in idx*/
                idx = key_index((const unsigned char *) key, ht->size); 
                current_node = ht->array[idx];
                while (current_node)
                { /*updating current_node*/
                        if (strcmp(current_node->key, key) == 0)
                        {
                                data = strdup(value);
                                if (!data)
                                {
                                        return (0);
                                }
                                free(current_node->value);
                                current_node->value = data;
                                return (1);
                        }
                        current_node = current_node->next;
                }
                new_node = malloc(sizeof(hash_node_t));
                if (!new_node) /*malloc for new_node and NULL check*/
                {
                        return (0);
                }
                new_node->key = strdup(key); /*copy to key of new_node*/
                new_node->value = strdup(value); /*copy to value of new_node*/
                new_node->next = ht->array[idx]; /*set ptr next to head*/
                ht->array[idx] = new_node; /*updates head*/
                return (1); /*success!*/
}
