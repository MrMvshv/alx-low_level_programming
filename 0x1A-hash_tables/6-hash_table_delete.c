#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: #table 2 delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int s = 0;

	if (ht == NULL)
		return;
	for (s = 0; s < ht->size; s++)
	{
		if (ht->array[s] == NULL)
		{	free(ht->array[s]);
			continue;
		}
		free(ht->array[s]->key);
		free(ht->array[s]->value);
		free(ht->array[s]);
	}
	free(ht->array);
	free((void *)ht);
}
