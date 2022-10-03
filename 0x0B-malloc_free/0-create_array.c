#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates and initializes an array of chars
 * @size: size of the array
 * @c: character to initialize with
 *
 * Return: Pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*s = c;
		s++;
	}

	s -= size;
	return (s);
}
