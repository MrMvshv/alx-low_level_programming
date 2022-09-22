#include "main.h"

/**
 * reverse_array - reverses the array of integers
 * @a: array of integers
 * @n: number of elements in array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int *start, *end, temp;

	start = a;
	end = a + n;
	end = end - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = *end;

		*end = *start;

		*start = temp;

		start++;
		end--;
	}
}
