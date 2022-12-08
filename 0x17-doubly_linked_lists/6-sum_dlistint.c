#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the n
 * @head: head node
 *
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *t;
	int sum = 0;

	if (head == NULL)
			return (0);
	t = head;
	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
