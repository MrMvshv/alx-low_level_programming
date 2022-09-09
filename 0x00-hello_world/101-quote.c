#include <stdio.h>
/**
 * main - prints out a string with special characters
 *
 * Description: tests the use of escape characters.
 *Return: always returns 1.
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(str, 1, sizeof(str), stderr);
	return (1);
}

