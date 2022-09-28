#include "main.h"
#include <stdio.h>

int endA(char *s, int n);

int n = 0;
int m = 0;
int flg = 0;

/**
 * _print_rev_recursion - prints the string's reverse
 * @s: the string pointer
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (flg == 0)
	{
		n = endA(s, m);
		printf("counted");
	}
	else if (n == 0)
	{
		printf("n is zero\n");
		return;
	}
	printf("main, n: %d", n);
	n -= 1;

	_putchar(s[n]);

	printf("main n: %d c: %c", n, s[n]);
	if (n > 0)
	{
		_print_rev_recursion(s);

		printf("main");
	}
}
/**
 * endA - gets length and takes pointer to end
 * @s: string pointer
 * @n: length variable
 *
 * Return: length of string
 */
int endA(char *s, int n)
{
	flg = 1;

	if (*s != '\0')
	{
		n += 1;
		s++;
		n = endA(s, n);
	}

	return (n);

}
