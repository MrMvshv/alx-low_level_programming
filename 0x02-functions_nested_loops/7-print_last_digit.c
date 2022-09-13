#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the number
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	while (n > 10)
	{
		n %= 10;
	}
	_putchar('0' + n);
	return (n);
}
