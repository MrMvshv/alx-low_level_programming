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
/**
 * insert_dnodeint_at_index - inserts a new node at position
 * @h: head
 * @idx: index
 * @n: integer value of node
 *
 * Return: address or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	size_t len;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	len = dlistint_len(*h);
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	temp = *h;
	while (temp)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
