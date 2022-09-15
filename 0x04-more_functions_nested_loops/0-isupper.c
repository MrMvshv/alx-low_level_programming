#include "main.h"
/**
 * _isupper -  checks for uppercase
 * @c: character to check (ascii int)
 * Return: 1 for uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
