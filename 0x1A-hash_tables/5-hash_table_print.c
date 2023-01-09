#include "hash_tables.h"
/**
 * test_hash - checks whether value printed is last
 * @ht: hash table
 * @idx: index
 *
 * Return: 1 if not last
 */
int test_hash(const hash_table_t *ht, unsigned long int idx)
{
	unsigned long int s = 0;

	for (s = (idx + 1); s < ht->size; s++)
	{
		if (ht->array[s] == NULL)
			continue;
		else
			return (1);
	}
	return (0);
}
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
		printf("\'%s\':\'%s\'", ht->array[s]->key, ht->array[s]->value);
		if (test_hash(ht, s) == 1)
			printf(", ");

	}
	printf("}\n");
}
