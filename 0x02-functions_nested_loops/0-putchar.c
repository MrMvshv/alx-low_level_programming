#include <stdio.h>
#include "_putchar.c"
#include "main.h"

int main(void)
{
	putch();
	_putchar(10);
	return (0);
}

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
