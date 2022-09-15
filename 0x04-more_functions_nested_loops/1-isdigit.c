#include "main.h"
/**
 * _isdigit -  checks for digit
 * @c: character to check (ascii int)
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
