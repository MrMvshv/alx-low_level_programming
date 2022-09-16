#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints largest prime factor of
 * 612852475143
 *
 * return (0)
 */
int main(void)
{
	long m = 612852475143;
	int fact;
	int i;

	while (m % 2 == 0)
	{
		fact = 2;
		m /= 2;
	}
	while (m % 3 == 0)
	{
		fact = 3;
		m /= 3;
	}
	for (i = 5; i <= sqrt(m); i += 6)
	{
		while (m % i == 0)
		{
			fact = i;
			m /= i;
		}
		while (m % (i + 2) == 0)
		{
		fact = i + 2;
		m /= (i + 2);
		}
	}
	if (m > 4)
		fact = m;

	printf("%d\n", fact);
	return (0);
}
