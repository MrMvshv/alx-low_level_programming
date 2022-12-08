#include "lists.h"

/**
 * add_dnodeint - adds node to beginning
 * @head: head pointer
 * @n: number to add
 *
 * Return: address of new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
