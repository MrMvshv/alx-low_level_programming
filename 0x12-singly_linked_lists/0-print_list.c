#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: list pointer
 *
 * Return; number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	char *s;
	list_t *current = NULL;

	current = (list_t *)h;
	while (current)
	{
		s = current->str;
		if (s == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, s);
		}
		n++;
		current = current->next;
	}

	return (n);
}
