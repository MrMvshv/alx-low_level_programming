#include "main.h"

int checker(char *ptr);

/**
 * cap_string - lowercase to uppercase
 * @s: pointer to string
 *
 * Return: pointer to uppercase string
 */

char *cap_string(char *s)
{
	char *ptr = s;
	char up;
	int i = 0;
	int cd;

	if (*ptr > 96 && *ptr < 123)
	{
		up = *ptr - 32;
		*ptr = up;
		i++;
	}

	while (*ptr != 0)
	{
		cd = checker(ptr);

		if (cd == 1)
		{
			ptr++;
			i++;
			if (*ptr > 96 && *ptr < 123)
			{
				up = *ptr - 32;
				*ptr = up;
				ptr++;
				i++;
			}
			continue;
		}
		else
		{
			ptr++;
			i++;
			continue;
		}
	}

	ptr = ptr - i;

	return (ptr);
}
/**
 * checker - checks for breaks
 * @ptr: string
 *
 * Return: 1 0r 0
 */

int checker(char *ptr)
{
	int cd;

	if (*ptr == ' ' || *ptr == '\t' || *ptr == ',')
		cd = 1;
	else if (*ptr == '\n' || *ptr == ';' || *ptr == '.')
		cd = 1;
	else if (*ptr == '!' || *ptr == '?' || *ptr == '\"')
		cd = 1;
	else if (*ptr == ')' || *ptr == '(' || *ptr == '{')
		cd = 1;
	else if (*ptr == '}')
		cd = 1;
	else
		cd = 0;

	return (cd);
}
