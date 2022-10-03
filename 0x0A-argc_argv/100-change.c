#include <stdio.h>
#include <stdlib.h>

/**
 * coinsN - gets number of coins
 * @cents: total amt
 *
 * Return: no of coins
 */
int coinsN(int cents)
{
	int tcn = 0;
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			tcn = cents / 25;
			coins += tcn;
			cents = cents % 25;
		}
		else if (cents >= 10)
		{
			tcn = cents / 10;
			coins += tcn;
			cents = cents % 10;
		}
		else if (cents >= 5)
		{
			tcn = cents / 5;
			coins += tcn;
			cents = cents % 5;
		}
		else if (cents >= 2)
		{
			tcn = cents / 2;
			coins += tcn;
			cents = cents % 2;
		}
		else
		{
			tcn = 1;
			coins += tcn;
			cents -= tcn;
		}
	}
	return (coins);
}

/**
 * main - prints the change for an amount of money in coins
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	coins = coinsN(cents);

	printf("%d\n", coins);
	return (0);
}
