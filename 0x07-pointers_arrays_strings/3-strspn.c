#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: main string
 * @accept: substring to check for
 *
 * Return: number of bytes in s consisting of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int t = 0;
	int swit = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				swit = 1;
				n = n + 1;
				break;
			}
			accept++;
			t++;
		}
		if (swit == 0)
		{
			break;
		}
		else
		{
			s++;
			accept = accept - t;
		}
	}
	return (n);
}
