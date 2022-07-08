#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in a list
 * @head: a pointer to the start of node
 *
 * Return: the sum if head, else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum)
}
