#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * chekA - checks if no number
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 or 0
 */

int chekA(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
	}
	return (0);

}
/**
 * main - adds two arguments passed
 * @argc: number of CL arguments
 * @argv: array of CL arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int flg = 0;

	flg = chekA(argc, argv);

	if (flg != 1 && argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
