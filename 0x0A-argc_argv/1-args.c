#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: number of CL arguments
 * @argv: array of CL arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
