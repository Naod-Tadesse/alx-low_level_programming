#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - this fun frees linked list
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

