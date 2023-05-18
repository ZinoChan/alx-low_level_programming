#include "lists.h"

/**
 * sum_dlistint - sum list nodes
 * @head: Pointer to the head of the list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
