#include "lists.h"

/**
 * listint_len - returns no of elements of a list
 * @h: list pointer
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	listint_t *current = NULL;

	current = (listint_t *)h;
	while (current)
	{
		n++;
		current = current->next;
	}

	return (n);
}
