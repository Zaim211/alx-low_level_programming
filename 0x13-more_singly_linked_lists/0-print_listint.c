#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a listint_t list
 * @h: Linked list
 * Return: The number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
