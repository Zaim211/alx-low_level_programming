#include "hash_listes.h"

/**
 * shash_table_create - Function that creates a sorted hash table
 * @size: The size of the hash table
 *
 * Return: Pointer to the new table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh;
	unsigned long int i;

	sh = malloc(sizeof(shash_table_t));
	if (sh == NULL)
		return (NULL);
	sh->size = size;
	sh->shead = NULL;
	sh->stail = NULL;
	sh->array = malloc(sizeof(shash_node_t) * size);
	if (sht->array == NULL)
	{
		free(sh);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		sh->array[i] = NULL;
	}
	return (sh);
}

/**
 * shash_table_set - Function that sets a key to a value in the hash table
 * @ht: The sorted hash table
 * @key: The key to the data
 * @value: The data to add
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *s, *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	s = make_shash_node(key, value);
	if (s == NULL)
		return (0);
	s->next = ht->array[index];
	ht->array[index] = s;
	add_to_sorted_list(ht, s);
	return (1);
}

/**
 * shash_table_get - Function retrieve a value from the hash table
 * @ht: The hash table
 * @key: The key to the data
 *
 * Return: The value associated with key, or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Function that prints a sorted hash table
 * @ht: The hash table to print
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Function that prints a sorted hash table in reverse
 * @ht: The hash table to print
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}
