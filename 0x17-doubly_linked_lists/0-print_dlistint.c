#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - function that print all the elements of a list
 * @h: pointer to head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
