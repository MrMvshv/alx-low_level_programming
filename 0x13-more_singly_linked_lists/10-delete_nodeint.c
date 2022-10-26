#include "lists.h"
/**
 * delete_nodeint_at_index - deletes nth node
 * @head: head node
 * @index: index of node frm 0
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *new1;
	unsigned int i;

	new = *head;
	if (!new)
		return (-1);
	if (index == 0)
	{
		new1 = new;
		new1 = new1->next;
		*head = new1;
		free(new);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (new->next == NULL)
			return (-1);
		new = new->next;
	}
	new1 = new;
	new1 = new1->next;
	new->next = new1->next;
	free(new1);

	return (1);
}
