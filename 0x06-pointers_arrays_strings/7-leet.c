#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string
 *
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	int i, z;
	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char s3[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (z = 0; z < 5; z++)
		{
			if (s[i] == s1[z] || s[i] == s2[z])
			{
				s[i] = s3[z];
				break;
			}
		}
	}
	return (s);
}
