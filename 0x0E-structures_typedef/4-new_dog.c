#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 *Return: a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int n = 0, o = 0, i;

	while (name[n] != '\0')
		n++;
	while (owner[o] != '\0')
		o++;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(n * sizeof(d->name));
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = malloc(o * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i <= n; i++)
		d->name[i] = name[i];

	d->age = age;

	for (i = 0; i <= o; i++)
		d->owner[i] = owner[i];

	return (d);
}
