#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: Linked list
 * Return: number of nodes
 **/
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
