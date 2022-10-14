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
	printf("%s", va_arg(*a, char *));
}

/**
 * get - gets a printer function
 * @pr: structure with type (ty) and corresponding printer (f)
 * @t: type char to compare
 *
 * Return: pointer to suitable printer function
 */
void (*get(printA * pr, char t))(va_list *)
{
	int i = 0;

	while (pr[i].ty)
	{
		if (*pr[i].ty == t)
		{
			return (pr[i].f);
		}
		i++;
	}
	return (pr[i].f);
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
	int i;
	void (*getfunc)(va_list *);

	printA pr[] = {
		{"c", pChar},
		{"i", pInt},
		{"f", pFloat},
		{"s", pStr},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && pr[i].ty != NULL)
	{
		getfunc = get(pr, format[i]);

		if (getfunc)
		{
			printf("%s", f);
			getfunc(&args);
			f = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
