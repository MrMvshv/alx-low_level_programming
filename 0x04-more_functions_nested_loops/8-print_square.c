#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	if (size == 0 || size < 0)
	{
		_putchar(10);
	}
	else
	{
		int k;
		int j;

		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
