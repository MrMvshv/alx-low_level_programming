#include "lists.h"
/**
 * insert_nodeint_at_index - inserts nth node
 * @head: head node
 * @idx: index of node frm 0
 * @n: number to insert
 *
 * Return: address of nth node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *new1;
	unsigned int i;

	new1 = malloc(sizeof(listint_t));
	if (*head == NULL || new1 == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new1->n = n;
		new1->next = *head;
		*head = new1;
		return (new1);
	}
	new = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (new->next == NULL)
			return (NULL);
		new = new->next;
	}
	new1->n = n;
	new1->next = new->next;
	new->next = new1;
	return (new1);
}
