#include "function_pointers.h"

/**
 * array_iterator - acts on each element of array
 * @array: the array
 * @size: array size
 * @action: function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size && array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
