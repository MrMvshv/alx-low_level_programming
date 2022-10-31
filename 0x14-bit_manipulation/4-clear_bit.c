#include "main.h"
/**
 * clear_bit - change bit to 0
 * @n: number
 * @index: index
 *
 * Return: 1 or 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
