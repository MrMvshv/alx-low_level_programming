#include <stdio.h>
/**
 * main - prints single digit numbers 0-9
 *
 * prints single digit numbers of base 10
 * Return: always 0
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
