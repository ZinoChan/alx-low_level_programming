#include "lists.h"

/**
 * print_listint_safe - Prints a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr;
	size_t ans = 0;

	if (head != NULL)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			ans++;
			curr = head->next;

			if (curr >= head)
			{
				printf("-> [%p] %d\n", (void *)curr, curr->n);
				exit(98);
			}
			head = curr;
		}
	}

	return (ans);
}
