#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head node
 * @index: index of node
 *
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *t;
	unsigned int i = 0;

	t = head;
	while (t && (i < index))
	{
		t = t->next;
		i++;
	}
	return (t);
}
