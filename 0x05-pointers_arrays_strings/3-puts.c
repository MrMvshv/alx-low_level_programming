#include "main.h"

/**
 * _puts - prints string
 * @str: the string pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != 0)
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar(10);
}
