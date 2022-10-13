#include "function_pointers.h"

/**
 * print_name - prints a name using function pointers
 * @name: the name
 * @f: printer function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
