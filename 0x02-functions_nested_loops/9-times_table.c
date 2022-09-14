#include <stdio.h>
#include "main.h"
void abv_10(int r);

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
		while (j <= 9)
		{
			result = i * j;
			if (j == 9)
			{
				if (result > 9)
				{
					_putchar(32);
					abv_10(result);
				} else
				{
					_putchar(32);
					_putchar(32);
					_putchar(result + '0');
				}
				_putchar(10);
				j++;
				break;
			}
			if (result > 9)
			{
				_putchar(32);
				abv_10(result);
				_putchar(44);
			}
			else if (result == 0 && j == 0)
			{
				_putchar(result + '0');
				_putchar(44);
			}
			else
			{
				_putchar(32);
				_putchar(32);
				_putchar(result + '0');
				_putchar(44);
			}
			j++;
		}
		i++;
	}
}

void abv_10(int r)
{
	int m;
	int n;

	n = r % 10;
	m = r / 10;

	_putchar(m + '0');
	_putchar(n + '0');
}
