#include "lists.h"

/**
 * print_listint_safe - Prints a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *next;
	size_t ans = 0;

	if (head == NULL)
		return (0);

	curr = head;
	next = head->next;

	while (next != NULL && next < curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		ans++;
		curr = curr->next;
		next = next->next;
	}

	if (next == NULL)
	{
		printf("-> [%p] %d\n", (void *)curr, curr->n);
		ans++;
	}
	else
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		printf("-> [%p] %d\n", (void *)next, next->n);
		ans++;
	}

	return (ans);
}
