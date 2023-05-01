#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes the node at index of list
 * @head: Pointer to first element
 * @index: The index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head;
	listint_t *c = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(h);
		return (1);
	}

	while (j < index - 1)
	{
		if (!h || !(h->next))
			return (-1);
		h = h->next;
		j++;
	}

	c = h->next;
	h->next = c->next;
	free(c);

	return (1);
}
