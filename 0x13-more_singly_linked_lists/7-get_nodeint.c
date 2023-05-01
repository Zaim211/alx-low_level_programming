#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns the nth node of list
 * @head: first node
 * @index: Index of the node, starting at 0
 * Return: node that insert, or NULL
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *y = head;

	while (y && index > j)
	{
		y = y->next;
		j++;
	}
	return (y ? y : NULL);
}
