#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area pointer
 * @b: constant byte to fill
 * @n: bytes of memory area to print
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}

	s = s - n;
	return (s);
}
