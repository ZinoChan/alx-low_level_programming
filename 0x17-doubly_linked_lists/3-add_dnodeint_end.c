#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - add node at end
 * @head: Pointer to a pointer the head of the list
 * @n: data
 * Return: new head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	ptr = *head;
	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_node;
	new_node->prev = ptr;

	return (*head);
}
