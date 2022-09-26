#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates char c in string s
 * @s: string to locate character in
 * @c: character to locate
 *
 * Return: pointer to first occurence of c in s or null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
	}

	return ('\0');
}
