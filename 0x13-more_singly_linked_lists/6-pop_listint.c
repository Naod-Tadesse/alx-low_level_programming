#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the node
 * @head: Double pointer the head node
 * Return: The head node data or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;
	int ni;

	if (*head == NULL)
		return (0);

	node_to_delete = *head;
	*head = node_to_delete->next;
	ni = node_to_delete->n;
	free(node_to_delete);

	return (ni);
}
