#include "main.h"
#include <stdio.h>
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

	while (*s != 0)
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * str_concat - allocates a space in memory and puts 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to combined string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2;

	s = (char *)malloc((sizeof(char) * len) + 1);
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
	s -= len;
	return (s);
}
