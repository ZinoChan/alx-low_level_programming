#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int curr = 0;
	dlistint_t *ptr, *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	while (*h != NULL)
	{
		if (curr == idx)
		{
			ptr = *h;
			new_node->next = ptr;
			new_node->prev = ptr->prev;
			ptr->prev = new_node;
		}
		(*h) = (*h)->next;
	}
	if (new_node != NULL)
		return (new_node);
	return (NULL);
}
