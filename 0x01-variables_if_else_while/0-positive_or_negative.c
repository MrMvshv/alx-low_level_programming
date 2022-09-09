#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print whether random int n is positive or negative
 *
 * Generates random number, checks whether zero, negative or positive.
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
