#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{

	printf("%lu\n", 18446744073709551615);
	print_binary(18446744073709551615);
	printf("\n");

	
	printf("%lu\n", ULONG_MAX - 2);
	print_binary(ULONG_MAX - 2);
	printf("\n");
	return (0);
}
