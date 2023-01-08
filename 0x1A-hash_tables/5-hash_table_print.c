#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: #table 2 print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int s = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (s = 0; s < ht->size; s++)
	{
		if (ht->array[s] == NULL)
			continue;
		printf("\'%s\':\'%s\', ", ht->array[s]->key, ht->array[s]->value);
	}
	printf("}\n");
}
