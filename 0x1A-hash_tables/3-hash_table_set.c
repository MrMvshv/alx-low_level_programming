#include "hash_tables.h"

/**
 * hash_table_set - adds an element 2 #table
 * @ht: # table
 * @key: key
 * @value: value to add
 *
 * Return: 1 on sucess, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		if (ht->array[0] != NULL)
			return (0);
		idx = 0;
	}
	ht->array[idx] = malloc(sizeof(hash_node_t));
	if (ht->array[idx] == NULL)
	{	free(ht->array[idx]);
		return (0);
	}
	ht->array[idx]->key = strdup(key);
	if (ht->array[idx]->key == NULL)
	{	free(ht->array[idx]->key);
		free(ht->array[idx]);
		return (0);
	}
	ht->array[idx]->value = strdup(value);
	ht->array[idx]->next = NULL;
	return (1);
}
