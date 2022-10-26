#include "lists.h"
/**
 * sum_listint - sums all data of a linked list
 * @head: head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *current;

	current = head;
	while (current)
	{
		n += current->n;
		current = current->next;
	}
	return (n);
}
