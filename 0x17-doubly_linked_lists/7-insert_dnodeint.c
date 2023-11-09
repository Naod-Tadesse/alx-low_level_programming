#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert new node at given position
 * @h: pointer to head
 * @idx: index to be inserted
 * @n: the value to store
 * Return: new node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp, *prev_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *h;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = temp;
		if (temp != NULL)
			temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		if (count == idx)
		{
			prev_node = temp->prev;
			new_node->prev = prev_node;
			new_node->next = temp;
			prev_node->next = new_node;
			if (temp != NULL)
				temp->prev = new_node;
			return (new_node);
		}
		prev_node = temp;
		temp = temp->next;
		count++;
	}

	free(new_node);
	return (NULL);
}

