#include <stdio.h>
#include <stdlib.>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: Pointer to freed listint_t list
 **/
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;
	while (*head)
	{
		t = *head->next;
		free(*head);
		*head = t;
	}
	*head = NULL;
}
