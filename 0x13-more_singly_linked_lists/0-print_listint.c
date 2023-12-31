#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Print the elements in  listint_t
 * @h: points the head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
