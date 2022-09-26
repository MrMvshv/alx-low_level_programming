#include "main.h"
#include <stddef.h>
/**
 * _strstr - find first occurence of substring in string
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to located substring, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int flg = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			flg = 1;
			break;
		}
		else
		{
			haystack++;
		}
	}

	if (flg == 1)
	{
		return (haystack);
	}
	else
	{
		return (NULL);
	}
}
