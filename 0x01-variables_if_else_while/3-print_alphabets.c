#include <stdio.h>
/**
 *  main - print lower and uppercase alphabet.
 *
 *  prints the alphabet in both case.
 *  Return: always zero
 */
int main(void)
{
	char alph_l[26] = "abcdefghijklmnopqrstuvwxyz";
	char alph_U[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph_l[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alph_U[i]);
	}
	putchar('\n');
	return (0);
}
