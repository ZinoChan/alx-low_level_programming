#include "lists.h"
/**
 * print_listint_safe - prints a linked list with a loop safely.
 * @head: pointer to the head of the linked list
 * Return: num of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t ans = 0;
	size_t idx;

	slow = head;
	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		ans++;
		slow = slow->next;
		fast = head;
		idx = 0;
		while (idx < ans)
		{
			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				return (ans);
			}
			fast = fast->next;
			idx++;
		}
		if (!head)
			exit(98);
	}
	return (ans);
}
