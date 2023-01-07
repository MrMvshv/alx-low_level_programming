#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer 2 # table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n = NULL;
	unsigned long int i = 0;

	n = malloc(sizeof(hash_table_t));
	if (n == NULL || size == 0)
		return (NULL);
	n->size = size;
	n->array = malloc(sizeof(*hash_node_t) * size);
	if (n->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		n->array[i] = NULL;
	return (n);
}
