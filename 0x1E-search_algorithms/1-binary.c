#include "search_algos.h"
/**
 * printArray - prints the array
 * @array: array pointer
 * @i: start index
 * @Asize: end index
 *
 */
void printArray(int *array, int i, int Asize)
{
	printf("Searching in array:");
	while (i < Asize)
	{
		printf(" %d", array[i]);
		i++;
		if (i != Asize)
			printf(",");
	}
	printf("\n");
}
/**
 * binarySearch - binary searches recursively
 * @array: array pointer
 * @size: size of array
 * @value: to search for
 *
 * Return: index found
 */
int binarySearch(int *array, size_t size, int value)
{
	size_t mid = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printArray(array, 0, size);

	if (mid && size % 2 == 0)
		mid--;
	if (array[mid] == value)
		return ((int)mid);
	if (array[mid] > value)
		return (binarySearch(array, mid, value));
	mid++;
	return (mid + binarySearch(array + mid, size - mid, value));
}
/**
 * binary_search - search for value in int array using binary search
 * @array: array pointer
 * @size: num of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = binarySearch(array, size, value);
	if (i >= 0 && array[i] != value)
		return (-1);
	return (i);
}
