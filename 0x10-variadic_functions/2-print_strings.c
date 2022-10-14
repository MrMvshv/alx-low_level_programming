#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (!s)
			printf("(nil)");

		printf("%s", s);

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
