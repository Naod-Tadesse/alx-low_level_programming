#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: pointer to head
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
