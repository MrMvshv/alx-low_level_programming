#include "main.h"

/**
 * _strcat - appends src to dest string
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}

	while (*src != '\0')
	{
		*dest = *(src);

		dest++;
		src++;
		i++;
	}

	dest = dest - i;


	return (dest);
}
