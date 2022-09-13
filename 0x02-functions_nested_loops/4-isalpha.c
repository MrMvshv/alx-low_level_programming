#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks whether c is alpha
 * @c: is provided character
 *
 * Return: 1 if letter,, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
	{
	return (1);
	}
	return (0);
}
