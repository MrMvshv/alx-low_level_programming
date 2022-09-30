#include <limits.h>
#include <stdio.h>
#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	long int n = INT_MIN;

	r = print_last_digit(INT_MIN);
	printf("%ld", n);
	_putchar('0' + r);
	 _putchar('\n');
	return (0);
}
