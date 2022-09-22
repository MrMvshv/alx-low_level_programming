#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string
 *
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == 65 || *s == 97)
			*s = 52;
		else if (*s == 69 || *s == 101)
			*s = 51;
		else if (*s == 79 || *s == 111)
			*s = 48;
		else if (*s == 84 || *s == 116)
			*s = 55;
		else if (*s == 76 || *s == 108)
			*s = 49;
		s++;
		i++;
	}

	s = s - i;
	return (s);
}
