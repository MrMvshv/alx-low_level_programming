#include "lists.h"
/**
 * free_list - frees a list
 * @head: head pointer
 *
 * Return: void
 */
void free_list(list_t *head)
{
	while (head)
	{
		list_t *c = head;

		head = head->next;
		free(c->str);
		free(c);
	}
}
