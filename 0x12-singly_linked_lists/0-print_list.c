#include "lists.h"
#include <stdio.h>

/**
  * print_list - Prints all elements of a list
  * @h: head of linked list
  *
  * Return: The number of nodes
  */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
