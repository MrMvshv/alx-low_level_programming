#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: string to put in file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t n = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		char *s = text_content;
		int i = 0;

		while (*s)
		{
			s++;
			i++;
		}

		n = write(file, text_content, i);
		if (n == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
