#include "main.h"
/**
 * get_bit - return value of a bit at index
 * @n: number
 * @index: index to get
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned int j = 0;
	int i, a[32];

	if (n == 0)
		return (-1);
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n /= 2;
		j++;
	}

	if (index > j)
		return (-1);

	return (a[index]);

}
