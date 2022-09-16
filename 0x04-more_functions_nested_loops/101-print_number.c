#include "main.h"
/**
 * print_number - prints any number using putchar
 * @n: number to print
 *
 * Return: 0
 */
void print_number(int n)
{
	int k;

	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}

	if (n == 0)
	{
		k = 0;
		_putchar(48);
	}
	else
	{
		k = 1;
	}

	if (n / 10)
		print_number(n / 10);

	if (k != 0)
		_putchar((n % 10) + '0');
}
