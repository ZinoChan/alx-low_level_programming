#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
		return;

	int is_first = 1;

	printf("{");
	for (unsigned long int i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (!is_first)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			is_first = 0;

			node = node->next;
		}
	}
	printf("}\n");
}
