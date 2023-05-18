#include "lists.h"

/**
 * delete_dnodeint_at_index - delte a node at index
 * @head: Pointer to pointer to the head of the list
 * @index: index of node
 * Return: -1 or 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr, *tmp;

	if (*head == NULL)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	while (curr != NULL && count < index)
	{
		curr = curr->next;
		count++;
	}

	if (curr == NULL)
		return (-1);

	tmp = curr->prev;
	tmp->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = tmp;

	free(curr);

	return (1);
}
