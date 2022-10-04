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

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * argstostr - concatenates all the arguments
 * @ac: number of args
 * @av: array of args
 *
 * Return: pointer to new string or null
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
		len++;
	}
	s = malloc((sizeof(char) * len) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			*s = av[i][j];
			s++;
		}
		*s = '\n';
		s++;
	}
	s -= len;
	return (s);
}
