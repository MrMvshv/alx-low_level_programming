#include <stdio.h>
/**
 * main - prints base 16 in lowercase
 *
 * adds a new line at the end.
 * Return: always 0
 */
int main(void)
{
	char alph[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
