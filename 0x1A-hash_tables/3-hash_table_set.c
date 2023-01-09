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
	unsigned long int idx = 0, i;
	hash_node_t *nw;
	char *val;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (val == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
		idx = 0;

	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}
	nw = malloc(sizeof(hash_node_t));
	if (nw == NULL)
	{	free(val);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{	free(val);
		free(nw);
		return (0);
	}
	nw->value = val;
	nw->next = ht->array[idx];
	ht->array[idx] = nw;
	return (1);
}
