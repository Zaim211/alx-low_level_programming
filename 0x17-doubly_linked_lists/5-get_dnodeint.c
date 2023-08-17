#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - function that
 * returns the nth node of a doubly linked list
 * @head: head of list
 * @index: index
 * Return: index of node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);

	return (NULL);
}
