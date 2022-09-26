#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of square matrix
 * @a: array of integers
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - 1 - i];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
