#include "lists.h"
/**
 * _strlen - returns length of string
 * @s: the string pointer
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * add_node_end- adds a node to end of a list
 * @head: head pointer
 * @str: string to duplicate
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new->str);
		return (NULL);
	}

	new->len = _strlen((char *)str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		list_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new;
	}
	return (new);
}
