#include <stdio.h>
#include "main.h"

/**
 * _islower - checks whether c is lowercase
 * @c: is provided character
 *
 * checks for lowercase
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	return (0);
}
