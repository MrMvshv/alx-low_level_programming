#include "main.h"


/**
 * append_text_to_file - appends text_content to file
 * @filename: file to append to
 * @text_content: string to put in file
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t n = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND, 0600);
	if (file == -1)
		return (-2);
	if (text_content)
	{
		n = write(file, text_content, _strlen(text_content));
		if (n == -1)
		{
			close(file);
			return (-3);
		}
	}
	close(file);
	return (1);
}

/**
* _strlen - length of a string
* @s: string
* Return: length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
