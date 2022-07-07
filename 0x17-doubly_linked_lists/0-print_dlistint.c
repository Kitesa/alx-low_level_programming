#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of doublt linked list
 * @h: the head of doubly linked list
 *
 * Return: the number of node in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		prinf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
