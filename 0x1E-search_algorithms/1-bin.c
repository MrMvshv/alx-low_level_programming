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
 * binary_search - search for value in int array using binary search
 * @array: array pointer
 * @size: num of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int middle, Asize, i;

	Asize = (int)size;
	i = 0;
	middle = 0;
	if (array == NULL)
		return (-1);
	while (i <= Asize)
	{
		printf("i->%d, Asize->%d, middle->%d\n", i, Asize, middle);
		middle = i + (Asize - i) / 2;
		if (array[middle] == value)
		{	printArray(array, middle, Asize);
			return (middle);
		}
		else if (array[middle] < value)
		{	printArray(array, i, Asize);
			i = middle + 1;
		}
		else
		{	printArray(array, i, Asize);
			Asize = middle - 1;
		}
	}
	return (-1);
}
