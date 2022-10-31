#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, mul2 = 1, k, r1 = 0, rf = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b > 49 || *b < 48)
			return (0);
		b++;
		i++;
	}
	b--;
	while (i > 0)
	{
		mul2 = 1;
		r1 = ((int)*b - 48);
		for (k = j; k > 0; k--)
		{
			mul2 *= 2;
		}
		r1 *= mul2;
		rf += r1;
		j++;
		b--;
		i--;
	}

	return (rf);
}
