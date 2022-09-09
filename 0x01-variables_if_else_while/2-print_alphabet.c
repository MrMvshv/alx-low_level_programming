#include <stdio.h>
/**
 *  main - print lowercase alphabet
 *
 *  prints the alphabet in lowercase.
 *  Return: always zero
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
