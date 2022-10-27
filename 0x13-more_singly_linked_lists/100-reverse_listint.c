#include "lists.h"
/**
 * reverse_listint - reverse it
 * @head: head nod(e)
 *
 * Return: point to first(last)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *this, *prev;

	if ((*head)->next == NULL)
		return (*head);

	while ((*head))
	{
		if ((*head)->next == NULL)
			break;

		this = (*head)->next;
		prev = *head;

		this->next = prev;
		*head = (*head)->next;
	}

	return (this);
}
