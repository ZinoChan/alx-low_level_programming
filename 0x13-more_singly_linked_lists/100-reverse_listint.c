#include "lists.h"

/**
 * reverse_listint -reverse linked list
 * @head: pointer to a pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = NULL, *next = NULL;

	if (head)
	{
		while (*head)
	{
		next = *head;
		*head = (*head)->next;
		next->next = curr;
		curr = next;
	}
	}

	*head = curr;
	return (*head);
}
