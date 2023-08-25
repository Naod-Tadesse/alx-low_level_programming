#include "lists.h"

/**
 * list_len - finds the number of elements in linked list
 * @h: pointer tolist
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t no_items = 0;

	while (h)
	{
		no_items++;
		h = h->next;
	}

	return (no_items);
}
