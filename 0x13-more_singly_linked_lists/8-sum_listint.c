#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Function that returns the sum of all the data (n) of list
 * @head: First node
 * Return: Sum, or 0 if the list empty
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
