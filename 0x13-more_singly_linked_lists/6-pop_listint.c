#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: head node
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int t;

	if (*head == NULL)
	{
		return (0);
	}

	new = *head;
	t = new->n;
	*head = new->next;
	free(new);
	return (t);
}
