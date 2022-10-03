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
 * _strdup - allocates a space in memory and puts a string init
 * @str: the string to allocate memory for
 *
 * Return: pointer to string, NULL otherwise
 */
char *_strdup(char *str)
{
	int len, i;
	char *s;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);

	s = (char *)malloc((sizeof(char) * len) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*s = str[i];
		s++;
	}

	s -= len;
	return (s);
}
