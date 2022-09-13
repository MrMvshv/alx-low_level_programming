#include <stdio.h>
#include "main.h"

/**
 * print_alphabet  - prints alphabet in lowercase
 *
 * followed by new line
 * return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar(10);
	}
}
