#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a string using the djb2 algorithm
 * @str: The string to be hashed
 *
 * Return: The computed hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
