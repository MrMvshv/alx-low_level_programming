#include "main.h"
/**
 * _strcat - appends src to dest string
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

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

	*dest = '\0';
	dest = dest - i;


	return (dest);
}
