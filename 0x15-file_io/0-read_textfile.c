#include "main.h"

/**
 * read_textfile - reads a text file and print it to stdout
 * @filename: file to read
 * @letters: number of letters to read
 *
 * Return: number of letters in file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	int file;
	char *txt;

	txt = malloc((sizeof(char) * letters) + 1);
	if (!filename || !txt)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(txt);
		return (0);
	}

	n = read(file, txt, sizeof(char) * letters);
	if (n == -1)
	{
		close(file);
		free(txt);
		return (0);
	}

	n = write(STDOUT_FILENO, txt, n);
	if (n == -1)
	{
		close(file);
		free(txt);
		return (0);
	}
	close(file);
	free(txt);
	return (n);
}
