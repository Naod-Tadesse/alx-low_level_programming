#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_dnodeint - add new node at beginning
 * @head: Pointer to head
 * @n: value of node
 * Return: new element address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
