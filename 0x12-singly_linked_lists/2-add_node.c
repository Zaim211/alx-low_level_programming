#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list
 * @str: pointer of string
 * @head: pointer to pointer the list_t list
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int lent = 0;
	list_t *A;

	for (str[lent])
		lent++;

	A = malloc(sizeof(list_t));
	if (!A)
		return (NULL);

	A->str = strdup(str);
	A->lent = lent;
	A->next = (*head);
	(*head) = A;
	return (*head);
}
