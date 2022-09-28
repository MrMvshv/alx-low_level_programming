#include "main.h"

/**
 * _sqrt - checks the square root against a digit
 * @g: the digit to try
 * @n: the number to get square root
 *
 * Return: square root
 */
int _sqrt(int g, int n)
{
	if ((g * g) == n)
		return (g);
	else if ((g * g) > n)
		return (-1);
	else
		return (_sqrt((g + 1), n));
}
/**
 * _sqrt_recursion - returns natural square root of n
 * @n: a number
 *
 * Return: The number's square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n < 0)
		return (-1);
	else
		return (_sqrt(1, n));
}
