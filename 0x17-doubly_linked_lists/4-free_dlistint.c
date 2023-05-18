#include "lists.h"

/**
 * free_dlistint  - frees a dlist
 * @head: Pointer to the head of the list
 * Return: new head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
