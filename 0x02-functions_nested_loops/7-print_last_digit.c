#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the number
 *
 * Return: value of last digit
 */
int abs_val(int n);

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n = n * -1;
	_putchar('0' + n);
	return (n);
}
