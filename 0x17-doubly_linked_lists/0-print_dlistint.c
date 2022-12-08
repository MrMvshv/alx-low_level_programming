#include "lists.h"

/**
 * print_dlistint - print all elements of a dlist
 * @h: list pointer
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	int z;
	dlistint_t *current = NULL;

	current = (dlistint_t *)h;
	while (current)
	{
		z = current->n;
		printf("%d\n", z);
		n++;
		current = current->next;
	}
	return (n);
}
