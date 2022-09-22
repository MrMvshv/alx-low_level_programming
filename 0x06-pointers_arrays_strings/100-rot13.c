#include "main.h"

/**
 * rot13 - encodes string in rot13
 * @a: array pointer
 *
 * Return: result string pointer
 */

char *rot13(char *a)
{
	int i, j;
	char orig[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char shift[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 54; j++)
		{
			if (a[i] == orig[j])
			{
				a[i] = shift[j];
				break;
			}

		}
	}
	return (a);
}
