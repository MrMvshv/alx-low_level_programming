#include "main.h"

/**
 * _strcpy - copies the string to buffer dest
 * @dest: string destination
 * @src: string source
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *ptr;

	while (*src != 0)
	{
		src++;
		i++;
	}

	src = src - i;
	i = i + 1;

	while (i > 0)
	{
		*dest = *src;
		dest++;
		src++;
		i--;
		j++;
	}

	ptr = dest - j;

	return (ptr);

}
