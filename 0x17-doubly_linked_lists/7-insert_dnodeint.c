#include "lists.h"


/**
 * insert_dnodeint_at_index  - gets node at index
 * @h: Pointer to the head of the list
 * @idx: index of node
 * @n: data
 * Return: new head
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int curr = 0;
	dlistint_t *ptr, *new_node;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	ptr = *h;
	while (ptr != NULL && curr < idx)
	{
		ptr = ptr->next;
		curr++;
	}

	if (ptr == NULL && curr < idx)
		return (NULL);

	if (ptr == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = ptr;
	new_node->prev = ptr->prev;

	if (ptr->prev != NULL)
		ptr->prev->next = new_node;
	ptr->prev = new_node;

	return (new_node);
}
