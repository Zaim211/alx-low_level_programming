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
	list_t *A;
	unsigned int len = 0;

	while (str[len])
		len++;

	A = malloc(sizeof(list_t));
	if (!A)
		return (NULL);

	A->str = strdup(str);
	A->len = len;
	A->next = (*head);
	(*head) = A;
	return (*head);
}
