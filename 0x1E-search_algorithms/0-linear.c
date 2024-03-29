#include "search_algos.h"

/**
 * linear_search - search for value in int array using linear search
 * @array: array pointer
 * @size: num of elements in array
 * @value: value to search for
 *
 * Return:  first index where value is located, -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
