#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - nth node of list
 * @head: Pointer to head
 * @index: index of node
 * Return: pointer to nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head != NULL)
	{
		if (num == index)
		return (head);
		head = head->next;
		num++;
	}

	return (NULL);
}

