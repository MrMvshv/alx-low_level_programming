#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: the key
 * @size: size of #table array
 *
 * uses djb2 algo
 * Return: index where tis stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	idx = hash_djb2(key);
	idx %= size;

	return (idx);
}
