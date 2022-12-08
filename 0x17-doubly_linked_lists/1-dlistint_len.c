#include "lists.h"

/**
 * dlistint_len - print all elements of a dlist
 * @h: list pointer
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	dlistint_t *current = NULL;

	current = (dlistint_t *)h;
	while (current)
	{
		n++;
		current = current->next;
	}
	return (n);
}
