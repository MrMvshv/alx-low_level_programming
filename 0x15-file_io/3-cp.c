#include "main.h"

/**
 * main - copy _from _to
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int from, to;
	ssize_t readc = 1024, writec, closec;
	char txt[1024];

	if (argc != 3)
		errhand(97, NULL);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		errhand(98, argv[1]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		errhand(99, argv[2]);
	while (readc == 1024)
	{
		readc = read(from, txt, 1024);
		if (readc == -1)
			errhand(98, argv[1]);
		writec = write(to, txt, readc);
		if (writec == -1)
			errhand(99, argv[2]);
	}
	closec = close(from);
	if (closec == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", from);
		exit(100);
	}
	closec = close(to);
	if (closec == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", to);
		exit(100);
	}
	return (0);
}


/**
 * errhand - error handler
 * @n: error code
 * @a: argument
 *
 * Return: void
 */
void errhand(int n, char *a)
{
	switch (n)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a);
		exit(99);
	case 98:
		 dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
		 exit(98);
	default:
		return;
	}
}
