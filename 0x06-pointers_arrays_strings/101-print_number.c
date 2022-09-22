#include "main.h"

/**
 * print_number - print an int
 * @n: the int
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int m;

	m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((x % 10) + '0');
}
