#include "main.h"

/**
 * puts_half - prints 2nd half of string
 * @str: the string pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int n;
	int len = str_len(str);

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	str = str + n;

	while (i <= n + 1)
	{
		if (*str == '\0')
		{
			break;
		}
		else
		{
		_putchar(*str);
		str = str + 1;
		i++;
		}
	}
	_putchar(10);
}

/**
 * str_len - returns length of string
 * @st: the string pointer
 *
 * Return: length of string
 */
int str_len(char *st)
{
	int i = 0;

	while (*(st + i) != '\0')
	{
		i++;
	}
	return (i);
}
