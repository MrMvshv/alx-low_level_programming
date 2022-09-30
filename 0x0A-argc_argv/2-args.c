#include "main.h"
#include <stdio.h>
/**
 * main - prints  allarguments passed
 * @argc: number of CL arguments
 * @argv: array of CL arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
