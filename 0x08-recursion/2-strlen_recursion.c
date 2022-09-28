#include "main.h"
int n = 0;
/**
 * _strlen_recursion - gets length of string
 * @s: string pointer
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		n++;
		s++;
		n = _strlen_recursion(s);
	}

	return (n);
}
