#include <stdio.h>
/**
 * main - prints all combinations of single digit numbers
 *
 * prints possible combinations of single digit numbers
 * Return: always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar('\x20');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
