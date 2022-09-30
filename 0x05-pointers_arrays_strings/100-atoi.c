#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to int
 * @s: string to convert
 *
 * Return: int or 0 if no int
 */

int _atoi(char *s)
{
	int len;
	int i = 0;
	int j = 0;
	int *n;
	int p;
	char sign;

	p = 0;
	n = &p;
	n = n + 1;

	while (*(s + i) != '\0')
	{
		i++;
	}

	len = i;

	for (i = 0; i <= len; i++)
	{
		if (*s == 45)
		{
			sign = 45;
			continue;	
		}
		else if (*s == 43)
		{
			sign = 43;
			continue;
		}
		else if (*s > 47 && *s < 58)
		{
			*n = *s;
			n++;
			j++;
			continue;
		}
		else
		{
			continue;
		}
	}
	putchar(sign);
	return (0);
}
