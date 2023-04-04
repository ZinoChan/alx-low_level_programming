#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at idx
 * @head: Pointer to pointer to the first node of the list.
 * @idx: position index
 * @n: data value
 * Return: sum of data or 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *curr;
	unsigned int index;

	if (!head)
		return (NULL);

	if (idx == 0)
	{
		new_n = malloc(sizeof(listint_t));
		if (new_n == NULL)
			return (NULL);
		new_n->n = n;
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}

	curr = *head;

	for (index = 0; index < idx - 1 && curr; index++)
		curr = curr->next;

	if (!curr)
		return (NULL);

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = curr->next;
	curr->next = new_n;
	return (new_n);
}
