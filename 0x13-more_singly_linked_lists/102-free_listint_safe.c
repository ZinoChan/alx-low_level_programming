#include "lists.h"

/**
 * free_listint_safe - Frees a list safely.
 * @h: Pointer to pointer to the head of the list.
 * Return: The size of the list.
 */


size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *next;
	size_t s = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		curr = *h;
		next = curr->next;
		free(curr);
		s++;
		if (curr <= next)
			break;

		*h = next;
	}
	*h = NULL;
	return (s);
}
