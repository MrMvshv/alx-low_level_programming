#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: the string pointer
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: 1ST string
 * @s2: 2ND string
 * @n: number of bytes of s2 to pick
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n < len2)
		len2 = n;

	len = len1 + len2;

	s = malloc((sizeof(*s1) * len) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		*s = s1[i];
		s++;
	}
	for (i = 0; i < len2; i++)
	{
		*s = s2[i];
		s++;
	}
	*s = '\0';
	s -= len;

	return (s);
}
