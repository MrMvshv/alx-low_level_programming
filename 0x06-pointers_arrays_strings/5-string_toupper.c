#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @s: pointer to string
 *
 * Return: pointer to uppercase string
 */

char *string_toupper(char *s)
{
	char *ptr = s;
	char up;
	int i = 0;

	while (*ptr != 0)
	{
		if (*ptr > 96 && *ptr < 123)
		{
			up = *ptr - 32;
			*ptr = up;
		}
		ptr++;
		i++;
	}

	ptr = ptr - i;

	return (ptr);
}
