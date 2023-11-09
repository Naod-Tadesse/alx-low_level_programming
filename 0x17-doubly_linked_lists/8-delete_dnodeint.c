#include "lists.h"

/**
 * delete_dnodeint_at_index - fun deletes node
 * @head: double pointer
 * @index: index of the node to be deleted
 * Return: -1 or 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == index)
		{
			previous = current->prev;
			previous->next = current->next;
			if (current->next != NULL)
				current->next->prev = previous;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}

