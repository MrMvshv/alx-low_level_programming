#include <stdio.h>
/**
 *  main - print incomplete alphabet.
 *
 *  prints the alphabet in except q e.
 * Return: always zero
 */
int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
	putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}

