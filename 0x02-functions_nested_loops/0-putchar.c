#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar followed by newline
 *
 * Return: 0 when success
 */
int main(void)
{
	putch();
	_putchar(10);
	return (0);
}
/**
 * putch - loops pt[] to print string
 *
 * uses _putchar function
 * Return: 0 when succes
 */

int putch(void)
{
	int i;
	char pt[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(pt[i]);
	}
	return (0);
}
