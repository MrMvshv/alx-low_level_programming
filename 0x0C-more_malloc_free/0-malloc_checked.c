#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of bytes to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ma;

	ma = malloc(b);
	if (ma == NULL)
		exit(98);
	
	return (ma);
}

