#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * adds a new line at the end.
 * Return: always 0
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
