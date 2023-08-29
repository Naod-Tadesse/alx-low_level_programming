#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in specified position
 * @head: double pointe to the head of the listint_t
 * @idx: the index of the list where the new node should be added
 * @n: element n of the node to add
 * Return: address of the new element (SUCCESS)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current_node = *head, *new_node_ptr;

	if (idx == 0)
	{
		new_node_ptr = malloc(sizeof(listint_t));

		if (!new_node_ptr)
			return (NULL);
		new_node_ptr->n = n;
		new_node_ptr->next = *head;
		*head = new_node_ptr;
		return (new_node_ptr);
	}

	while (current_node && ((i + 1) != idx))
	{
		current_node = current_node->next;
		i++;
	}

	if ((i + 1) == idx)
	{
		new_node_ptr = malloc(sizeof(listint_t));

		if (!new_node_ptr)
			return (NULL);
		new_node_ptr->n = n;
		new_node_ptr->next = current_node->next;
		current_node->next = new_node_ptr;
		return (new_node_ptr);
	}
	return (NULL);
}
