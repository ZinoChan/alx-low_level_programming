#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if the node is deleted successfully, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *curr, *prev;

	if (head == NULL || head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	while (curr != NULL)
	{
		if (idx == index)
		{
			prev->next = curr->next;
			free(curr);
			return (1);
		}
		idx++;
		prev = curr;
		curr = curr->next;
	}

	return (-1);
}
