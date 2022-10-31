#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints an int in binary
 * @n: int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;

	while ((n >> j) != 0)
	{
		j++;
	}

	if (j != 0)
		j--;

	for (i = j; i >= 0; i--)
	{
		int k = n >> i;

		if (k & 1)
			_putchar(49);
		else
			_putchar(48);
	}
}
