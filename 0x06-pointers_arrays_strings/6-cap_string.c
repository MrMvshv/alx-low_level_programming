#include "main.h"

int checker(char *ptr);

/**
 * cap_string - lowercase to uppercase
 * @s: pointer to string
 *
 * Return: pointer to uppercase string
 */

char *cap_string(char *s)
{
	char sep[] = ",\t;\n; .!?\"(){}";
	int cmp, i, z;

	for (i = 0; s[i] != '\0'; i++)
	{
		cmp = 0;

		if (i == 0)
		{
			cmp = 1;
		}
		else
		{
			for (z = 0; sep[z] != '\0'; z++)
			{
				if (s[i - 1] == sep[z])
				{
					cmp = 1;
					break;
				}
			}
		}

		if (cmp == 1)
		{
			if (s[i] <= 'z' && s[i] >= 'a')
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
