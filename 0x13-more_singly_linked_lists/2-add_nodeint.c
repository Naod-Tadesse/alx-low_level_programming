#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add new node at the start
 * @n: Nodes
 * @head: first node
 * Return: The address new element, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
