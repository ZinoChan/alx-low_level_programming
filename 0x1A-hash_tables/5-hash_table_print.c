#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
        unsigned long int i;
        hash_node_t *node;
        int is_first;

        if (ht == NULL)
                return;

        is_first = 1;

        printf("{");
        for (i = 0; i < ht->size; i++)
        {
                node = ht->array[i];

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
