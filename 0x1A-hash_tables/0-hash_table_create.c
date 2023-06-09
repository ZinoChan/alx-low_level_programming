#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: Pointer to the newly created hash table
 * or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}

	return (hash);
}
