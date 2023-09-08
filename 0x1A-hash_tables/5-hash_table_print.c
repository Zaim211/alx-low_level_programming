#include "hash_listes.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: The hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s', '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
