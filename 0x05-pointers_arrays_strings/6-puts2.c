#include "main.h"

/**
 * puts2 - prints every other char of string
 * @str: the string pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int len = str_len(str);

	while (i < (len / 2) + 1)
	{
		if((*str == '\0'))
		{
			break;
		}
		else
		{
		_putchar(*str);
		str = str + 2;
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
