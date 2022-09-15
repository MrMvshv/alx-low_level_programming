#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size == 0 || size < 0)
	{
		_putchar(10);
	}
	else
	{
		int k;
		int j;
		int t = 1;

		for (j = 0; j < size; j++)
		{
			for (k = (size - t); k > 0; k--)
			{
				_putchar(32);
			}
			for (k = t; k > 0; k--)
			{
				_putchar(35);
			}
			_putchar(10);
			t++;
		}
	}
}
