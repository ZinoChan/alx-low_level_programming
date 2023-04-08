#include "main.h"

/**
 * set_bit - sets val of bit to 1 at idx
 * @n: bit num
 * @index: index
 * Return: 1 or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit_per_byto = 8;

	if (n == NULL || index >= sizeof(unsigned long) * bit_per_byto)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
