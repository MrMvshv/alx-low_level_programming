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
 * splitlen - counts words in string
 * @str: the string
 *-
 * Return: number of words in string
 */
int splitlen(char *str)
{
	int l;

	while (*str != '\0')
	{
		while (*str != 32)
			str++;
		if (*(str + 1) == 32)
			str++;
		l++;
		str++;
	}
	return (l);
}
/**
 * arrstr - creates array of words from string
 * @str: the string
 * @len: number of words
 *
 * Return: array of words
 */
char **arrstr(char *str, int len)
{
	char **arrw;
	int m, k;
	int i = 0;

	arrw = malloc((sizeof(char *) * len) + 1);
	while (*str != '\0')
	{
		m = 0;
		k = 0;

		if (*str == 32 && !(*(str + 1) == '\0'))
		{
			str++;
		}
		else if (*str == 32 && *(str + 1) == '\0')
		{
			return (NULL);
		}
		else if (*str != 32)
		{
			while ((*str != 32) && (*str != '\0'))
			{
				m++;
				str++;
			}

			arrw[i] = malloc((sizeof(char) * m) + 1);
			while (m > 0)
			{
				arrw[i][k] = *(str - m);
				m--;
				k++;
			}
			arrw[i][k] = '\0';
			i++;
		}
	}
	arrw[i] = NULL;
	return (arrw);
}
/**
 * strtow - splits a string to words
 * @str: string to split
 *
 * Return: pointer to array of words or NULL
 */
char **strtow(char *str)
{
	char **arrw;
	int len;

	if (str == NULL)
		return (NULL);
	if (_strlen(str) == 0)
		return (NULL);

	len = splitlen(str);
	arrw = arrstr(str, len);
	if (arrw == NULL)
		return (NULL);
	return (arrw);
}
