#include "lists.h"

/**
 * pop_listint - Deletes the pop out from linked list.
 * @head: Pointer to pointer to the first node of the list.
 * Return: The value of the deleted node, or 0 if empty.
 */

int pop_listint(listint_t **head)
{
	int val;
	listint_t *tmp;

	if (head == NULL || *head  == NULL)
		return (0);

	val = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (val);
}
