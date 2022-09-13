#include <stdio.h>

/**
 * main - Prints all unique combinations of two digits.
 *
 * Return: Always zero.
 */

int main(void)
{
		int i = 48;
		int e = 48;
		int a = 48;

		while (a < 58)
		{
			e = 48;
			while (e < 58)
			{
				i = 48;
				while(i < 58)
				{
					if (e != i && a != e && a < e && e < i)
					{
						putchar(a);
						putchar(e);
						putchar(i);
						if (i == 57 && e == 56 && a == 55)
						{
							break;
						}
						putchar(',');
						putchar(' ')
					}
					i++;
				}
				e++;
			}
			a++;
		}
		putchar('/n');
		return (0);
}		
