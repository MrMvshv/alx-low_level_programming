#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: number of times to print _
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int k = 0;

	if (n == 0 || n < 0)
	{
		_putchar(10);
	}
	else
	{

		while (n > 0)
		{
			int i;

			for (i = 0; i < k; i++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
			k++;
			n--;
		}
	}
}
