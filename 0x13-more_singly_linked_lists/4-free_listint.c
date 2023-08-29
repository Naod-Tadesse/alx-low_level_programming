#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to the head/first
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
