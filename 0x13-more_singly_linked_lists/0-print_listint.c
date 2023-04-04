#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int ans = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			ans++;
		}
	}
	return (ans);
}
