#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: small number
 * @max: big number
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, m;
	unsigned int size = 0;

	if (min > max)
		return (NULL);

	size = max - min;
	size++;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = min, m = 0; i <= max; i++, m++)
	{
		arr[m] = i;
	}
	return (arr);
}
