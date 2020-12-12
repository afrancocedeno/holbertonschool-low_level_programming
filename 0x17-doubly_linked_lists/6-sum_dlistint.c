#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n).
 * @head: input variable with list
 *
 * Return: integer with total.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	/* if list has only one node, just return the n member */
	if (!head)
		return (0);
	if (!(*head).next)
		return ((*head).n);
	while (head)
	{
		total += (*head).n;
		head = (*head).next;
	}
	return (total);
}
