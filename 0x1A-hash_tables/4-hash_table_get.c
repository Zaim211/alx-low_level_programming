#include "hash_listes.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: The hash table you want to look into
 * @key: The key you are looking for
 *
 * Return: Value associated with the key, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *t;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned chr *)key, ht->size);
	t = ht->array[index];
	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
			return (t->value);
		t = t->next;
	}
	return (NULL)
}
