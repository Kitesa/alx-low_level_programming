#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of doubly linked list
 * @head: pointer to the head of the linked list
 * @n: data for the new node
 * Return: the address of the new address, else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;

	return (new);
}
