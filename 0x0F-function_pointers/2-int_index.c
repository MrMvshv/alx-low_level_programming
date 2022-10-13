#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function
 *
 * Return: index of found int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 0)
				continue;
			else
				return (i);
		}
		return (-1);
	}
	return (-1);
}
