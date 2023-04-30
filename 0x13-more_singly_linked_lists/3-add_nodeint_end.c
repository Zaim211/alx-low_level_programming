#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: Pointer to the first element
 * @n: Values that insert in new element
 * Return: Pointer to new node, or NULL if it fails
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listtint_t *new;
	listint_t *temp = *head;

	new = mallo(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
