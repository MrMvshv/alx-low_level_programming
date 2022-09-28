#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: the string's pointer
 *
 * return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
