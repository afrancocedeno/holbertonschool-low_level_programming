#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Input variable with head list reference.
 * @index: Input variable with index for node nth.
 *
 * Return: returns the nth node or NULL if unexist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current_node = head;

	if (!head)
		return (NULL);
	else
	{
		for (; i < index; i++)
			current_node = (*current_node).next;
		if (!current_node)
			return (NULL);
	}
	return (current_node);
}
