#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	while (*head)
	{
		listint_t *c = *head;

		*head = (*head)->next;
		free(c);
	}
	*head = NULL;
}
