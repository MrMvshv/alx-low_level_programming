#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: bytes to copy
 *
 * Return: pointer to memory area copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	dest = dest - n;
	return (dest);
}
