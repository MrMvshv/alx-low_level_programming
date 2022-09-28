#include "main.h"
/**
 * _prime - checks against a counter whether prime
 * @c: counter
 * @n: number
 *
 * Return: 0 or 1
 */
int _prime(int c, int n)
{
	if (n % c == 0)
		return (0);
	else if (n < 2)
		return (0);
	else if (c > n / 2)
		return (1);
	else
		return (_prime(c + 1, n));
}
/**
 * is_prime_number - checks if prime
 * @n: number to check
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else
		return (_prime(2, n));
}
