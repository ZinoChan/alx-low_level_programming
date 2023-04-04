#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to a pointer to the head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
	*head = NULL;
}
