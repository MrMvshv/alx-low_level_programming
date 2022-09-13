#include <stdio.h>
#include "main.h"

/**
 * _abs - prints absolute value of a number
 * @n: the number
 * Return: 1 if positive, 0 if 0, -1 if negative
 */

int _abs(int n)
{
	int neg;

	if (n > 0)
	{
		return (n);
	} else if (n == 0)
	{
		return (0);
	}
	neg = (n * -1);
	return (neg);
}
