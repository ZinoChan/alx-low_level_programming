#include "lists.h"
#include <string.h>
/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tail = *head;

	if (head == NULL || str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = newNode;
	}

	return (newNode);
}
