#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * return: 0
 */

void times_table(void)
{
	int i = 0;
	int j;
	int result;

	while (i <= 9)
	{
		j = 0;
		while (j < 10)
		{
			result = i * j;
			if (j == 9)
			{
				_putchar(result);
				_putchar(10);
				break;
			}
			_putchar(result + '0');
			_putchar(44);
			_putchar(32);
			_putchar(32);
			j++;
		}
		i++;
	}
}
