#include <stdio.h>
#include "main.h"

void printer(int n);
/**
 * print_to_98 - prints from n to 98;
 * @n: number to start from
 *
 * return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printer(n);
			n--;
		}
	}
	while (n <= 98)
	{
		printer(n);
		n++;
	}
	printf("\n");
}

/**
 * printer - the printf bundle
 * @n: the number to print
 *
 * return: void
 */
void printer(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	} else
	{
		printf("%d", n);
		printf(", ");
	}
}
