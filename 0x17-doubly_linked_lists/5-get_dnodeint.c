#include "lists.h"


/**
 * get_dnodeint_at_index  - gets node at index
 * @head: Pointer to the head of the list
 * @index: index of node
 * Return: new head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (index == count)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
