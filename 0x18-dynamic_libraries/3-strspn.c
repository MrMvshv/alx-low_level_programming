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
	int i;
	int j;
	int c = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (c);
}
