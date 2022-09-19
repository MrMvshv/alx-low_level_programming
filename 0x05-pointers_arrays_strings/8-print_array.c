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
	int t = 0;
	while (t < n)
	{
		if (t == (n - 1))
		{
			printf("%d\n", a[t]);
			break;
		}
		else
		{
			printf("%d, ", a[t]);
			*a = *a + 1;
			t++;
		}
	}
}
