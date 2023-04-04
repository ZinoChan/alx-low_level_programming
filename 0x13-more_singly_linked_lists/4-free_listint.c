#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
