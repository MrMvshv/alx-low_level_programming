#include "main.h"

/**
 * _strlen_recursion - gets length of string
 * @s: string pointer
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * paliChekA - checks char similarity using pointers
 * @a: first character
 * @z: last character
 * @ln: string length
 *
 * Return: 1 or 0
 */
int paliChekA(char *a, char *z, int ln)
{
	if ((ln / 2) > 0 && *a == *z)
	{
		a++;
		z--;
		ln--;
		return (paliChekA(a, z, ln));
	}
	else if (*a != *z)
	{
		return (0);
	}

	return (1);

}

/**
 * is_palindrome - checks if string is palindrome
 * @s: the string
 *
 * Return: 1 if it is 0 if itain't
 */
int is_palindrome(char *s)
{
	char *a, *z;
	int ln;

	ln = _strlen_recursion(s);
	a = s;
	z = s;
	z = z + ln - 1;

	return (paliChekA(a, z, ln));
}
