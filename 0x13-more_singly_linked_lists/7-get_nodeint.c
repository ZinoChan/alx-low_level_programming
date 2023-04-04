#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node
 * Return: pointer to the indexed node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		if (idx == index)
			return (curr);
		idx++;
		curr = curr->next;
	}

	return (NULL);
}
