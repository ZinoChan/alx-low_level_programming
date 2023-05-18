#include "lists.h"

/**
 * dlistint_len - gets list len
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
