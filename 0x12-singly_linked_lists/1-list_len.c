#include "lists.h"
/**
  * list_len - Show the number of elements of a list
  * @h: head of linkedlist
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
