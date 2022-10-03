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
	int i;
	int j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
				break;
		}
		if (needle[j - i] == '\0')
			return (haystack + i);
	}
	return (0);
}
