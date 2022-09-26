#include "main.h"

/**
 * _strpbrk - search string for any of a set
 * @s: string to search
 * @accept: set of bytes
 *
 * Return: pointer to s or null
 */

 char *_strpbrk(char *s, char *accept)
 {
 	int m = 0;
	int n;
	char *p;

	while (s[m] != '\0')
	{
		n = 0;

		while (accept[n] != '\0')
		{
			if (accept[n] == s[m])
			{
				p = &s[m];
				return (p);
			}
			n++;
		}
		m++;
	}

	return (0);
 }
