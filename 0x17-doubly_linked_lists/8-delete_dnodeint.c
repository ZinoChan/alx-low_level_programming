#include "lists.h"

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

	while(curr != NULL && count < index)
	{
		curr = curr->next;
		count++;
	}

	tmp = curr->prev;
	tmp->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = tmp;

	free(curr);

	return (1);
}
