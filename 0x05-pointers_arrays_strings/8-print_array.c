#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array
 * @a: the array pointer
 * @n: elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		if (t != (n - 1))
			printf("%d, ", a[t]);
		else
			printf("%d", a[t]);
	}

	printf("\n");
}
