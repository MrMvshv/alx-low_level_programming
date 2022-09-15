#include "main.h"
/**
 * print_line - prints a line
 * @n: number of times to print _
 *
 * Return: void
 */
void print_line(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar(10);
	}
	else
	{
		while (n > 0)
		{
			_putchar(95);
			n--;
		}
		_putchar(10);
	}
}
