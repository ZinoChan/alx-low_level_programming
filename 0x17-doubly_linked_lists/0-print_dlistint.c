#include "lists.h"

/**
 * print_dlistint - Prints the values of a doubly linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t sum = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		sum++;
		ptr = ptr->next;
}
	return (sum);
}
