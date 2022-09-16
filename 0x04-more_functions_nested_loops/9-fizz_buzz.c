#include <stdio.h>

/**
 * main -  prints 0 to 99 Fizz Buzz
 *
 * Return: void
 */
int main(void)
{
	int m;

	for (m = 1; m < 101; m++)
	{
		if (((m % 3) == 0) && !((m % 5) == 0))
		{
			printf("Fizz ");
		}
		else if (((m % 5) == 0) && !((m % 3) == 0))
		{
			printf("Buzz ");
		}
		else if (((m % 5) == 0) && ((m % 3) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", m);
		}
	}
	printf("\n");

	return (0);
}
