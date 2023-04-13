#include "search_algos.h"
#include <math.h>
/**
 * minor - returns the minor int
 * @a: int 1
 * @b: int 2
 *
 * Return: the one that's less
 */
int minor(int a, int b)
{
	return (a < b ? a : b);
}
/**
 * jump_search - search using jump search algorithm
 * @array: array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of value, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int iSize = (int)size;
	int block = sqrt(size);
	int end = block;
	int start = 0;
	int i = 0;
	int min = 0;

	while (end < iSize)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (value <= array[end])
			break;
		start = end;
		end += block;
	}

	if (end > iSize)
	{	printf("Value checked array[%d] = [%d]\n", iSize - 1, array[iSize - 1]);
		min = end;
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	min = minor(end, iSize);
	for (i = start; i <= min; i++)
	{
		if (i >= iSize)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
