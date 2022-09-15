#include "main.h"
/**
 * more_numbers -  prints 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int m = 0;

	while (m < 10)
	{
		int i = 48;
		int j;

		while (i > 47 && i < 58)
		{
			_putchar(i);
			i++;
		}
		for (j = 48; j <= 53; j++)
		{
			if (j == 53)
				j = 10;

			if (j != 10)
				_putchar(49);
			_putchar(j);

			if (j == 10)
				break;
		}
		m++;
	}
}
