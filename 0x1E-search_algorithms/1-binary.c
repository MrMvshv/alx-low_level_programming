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
	int middle, Asize, i, nw;

	Asize = (int)size;
	i = 0;
	middle = 0;
	nw = 0;
	if (array == NULL)
		return (-1);
	printArray(array, i, Asize);
	while (i < Asize)
	{
		nw = (Asize - i) / 2;
		if (Asize % 2 == 0 && nw != 1)
			nw--;
		middle = middle + nw;
		if (array[middle] == value)
		{	return (middle);
		}
		else if (i == (Asize - 1) && value > array[i])
		{	return (-1);
		}
		else if (array[i] == value)
		{	return (i);
		}
		else if (array[middle] < value)
		{	i = middle + 1;
			printArray(array, i, Asize);
		}
		else if (array[middle] > value)
		{	Asize = middle;
			middle = i;
			printArray(array, i, Asize);
		}
		else
		{	return (-1);
		}
	}
	return (-1);
}
