#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: list pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	int t;
	listint_t *current = NULL;

	current = (listint_t *)h;
	while (current)
	{
		t = current->n;
		printf("%d\n", t);
		n++;
		current = current->next;
	}
	return (n);
}
