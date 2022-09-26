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
	int flg = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			flg = 1;
			break;
		}
		s++;
	}

	if (flg == 0)
	{
		return (NULL);
	}
	else
	{
		return (s);
	}

}
