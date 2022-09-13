#include <stdio.h>
#include "main.h"

void loop_1(int i);
void loop_2(void);
/**
 * jack_bauer - prints every minute of the day
 *
 * return: 0
 */

void jack_bauer(void)
{
	int i = 0;

	loop_1(i);
	loop_2();
}

/**
 * loop_1 - first loop
 *@i: first digit
 *
 * return: void
 */
void loop_1(int i)
{
	int j, k, l;

	while (i < 2)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(58);
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar(10);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

/**
 * loop_2 - loop 2
 *
 * return: void
 */
void loop_2(void)
{
	int i, j, k, l;

	i = 2;

	j = 0;

	while (j < 4)
	{
		k = 0;
		while (k <= 5)
		{
			l = 0;
			while (l <= 9)
			{
				_putchar('0' + i);
				_putchar('0' + j);
				_putchar(58);
				_putchar('0' + k);
				_putchar('0' + l);
				_putchar(10);
				l++;
			}
			k++;
		}
		j++;
	}
}


