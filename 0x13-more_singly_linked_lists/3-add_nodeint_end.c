#include "lists.h"
/**
 * add_nodeint_end- adds a node to end of a list
 * @head: head pointer
 * @n: int to add
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		listint_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new;
	}
	return (new);
}
