#include "variadic_functions.h"

/**
 * pChar - printfs a character
 *
 * @a: variable list item to print
 * Return: void
 */
void pChar(va_list *a)
{
	printf("%c", va_arg(*a, int));
}

/**
 * pInt - printfs an int
 *
 * @a: variable list item to print
 * Return: void
 */
void pInt(va_list *a)
{
	printf("%d", va_arg(*a, int));
}

/**
 * pFloat - printfs a float
 *
 * @a: variable list item to print
 * Return: void
 */
void pFloat(va_list *a)
{
	printf("%f", va_arg(*a, double));
}

/**
 * pStr - printfs a string
 * @a: variable list item to print
 * Return: void
 */
void pStr(va_list *a)
{
	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", va_arg(*a, char *));
}

/**
 * print_all - prints everything
 * @format: list of types of arguments passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *f = "";
	va_list args;
	int i, j;

	printA pr[] = {
		{"c", pChar},
		{"i", pInt},
		{"f", pFloat},
		{"s", pStr},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*pr[j].ty == format[i])
			{
				printf("%s", f);
				f = ", ";
				pr[j].f(&args);
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
