#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Prints elemets in linked listint_t list
 * @h: Points to the head node
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
