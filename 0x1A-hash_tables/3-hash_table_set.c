#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: The hash table you want to add or update the key/value
 * @key: Key for the node
 * @value: Value of the node
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
