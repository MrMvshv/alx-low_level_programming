#include "lists.h"
/**
 * add_nodeint - adds a node to beginning of a list
 * @head: head pointer
 * @n: int to duplicate
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
