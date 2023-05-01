#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: Pointer to the first element
 * Return: The head node’s data (n), or 0 if the linked list is empty
 **/
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (!head || !*head)
		return (0);

	n = *head->y;
	h = *head->next;
	free(*head);
	*head = h;

	return (n);
}
