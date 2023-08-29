#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Finds the nth node in list
 * @head: Pointer to first/head linked list
 * @index: Index of the node
 * Return: The nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp = head;

	while (temp && (counter < index))
	{
		temp = temp->next;
		counter++;
	}

	if (counter < index)
		return (NULL);

	return (temp);
}
