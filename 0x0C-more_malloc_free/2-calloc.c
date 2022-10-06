#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - allocates memory for an array and sets to 0
 * @nmemb: number of elements in array
 * @size: size of each array element
 *
 * Return: pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;
	unsigned int tot = 0;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tot = size * nmemb;
	cal = malloc(tot);
	if (cal == NULL)
		return (NULL);

	for (i = 0; i < tot; i++)
	{
		cal[i] = 0;
	}
	return ((void *)cal);
}
