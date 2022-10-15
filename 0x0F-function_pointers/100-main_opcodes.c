#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of main
 * @argc: number of arguments passed
 * @argv: list of argument
 *s
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));

		if (i == n - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
