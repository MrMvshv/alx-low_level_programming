#include "main.h"
/**
 * flip_bits - returns number of bits to flip
 *@n: first number
 *@m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
