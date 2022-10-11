#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
