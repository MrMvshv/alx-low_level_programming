#include "lists.h"

/**
 * list_len - prints all elements of a list
 * @h: list pointer
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	list_t *current = NULL;

	current = (list_t *)h;
	while (current)
	{
		n++;
		current = current->next;
	}

	return (n);
}
