#ifndef VARD
#define VARD
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * prstruct - type printer structure
 *
 * @ty: variable type
 * @f: type-dependent printer
 */
typedef struct prstruct
{
	char *ty;
	void (*f)(va_list *a);
} printA;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
