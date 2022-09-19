#include "main.h"

/**
 * rev_string  - prints string in reverse
 * @s: the string pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len;
	int i;
	char *start, *end, temp;

	len = str_len(s);
	/* start and end pointers point to string s */
	start = s;
	end = s;

	/* moves pointer address of end to 2nd last char of s */
	for (i = 0; i < len - 1; i++)
	{
		end++;
	}

	/* loops i from 0 to halfway since op's done twice */
	for (i = 0; i < len / 2; i++)
	{
		/* temp becomes value at end of string */
		temp = *end;
		/* value at start of string goes to position end */
		*end = *start;
		/* value at start is made value of temp */
		*start = temp;

		/* start address goes next 1 character */
		start++;
		/* end address goes back 1 character */
		end--;
	}

}
/**
 * str_len - returns length of string
 * @st: the string pointer
 *
 * Return: length of string
 */
int str_len(char *st)
{
	int i = 0;

	while (*(st + i) != '\0')
	{
		i++;
	}
	return (i);
}
