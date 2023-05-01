#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a new node
 * @idx: The index of the list where the new node should be added
 * @head: Pointer to the first node
 * @n: Value to insert int the new node
 * Return: The address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *h = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (j = 0; h && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new->next = h->next;
			h->next = new;
			return (new);
		}
		else
			h = h->next;
	}
	return (NULL);
}
