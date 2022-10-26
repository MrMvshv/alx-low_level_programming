#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: head node
 * @index: index of node frm 0
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *new;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	new = head;
	for (i = 0; i < index; i++)
	{
		if (new->next == NULL)
			return (NULL);
		new = new->next;
	}
	return (new);
}
