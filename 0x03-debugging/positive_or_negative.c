#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * positive_or_negative - Print whether random int n is positive or negative
 *
 * Generates random number, checks whether zero, negative or positive.
 * Return: Always 0
 */
void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
}
