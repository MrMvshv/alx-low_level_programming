#include "main.h"

/**
 * print_rev  - prints string in reverse
 * @s: the string pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int z;
	int m;
	int i = 0;
	char *str = s;

	/* checks length of string */
	while (*str != 0)
	{
		str++;
		i++;
	}

	z = i;
	s += z;

	/* prints it */
	for (m = z; m >= 0; m--)
	{
		if (*s != 0)
		{
			_putchar(*s);
			s--;
		}
		else
		{
			s--;
			continue;	
		}
	}

	_putchar(10);
}
