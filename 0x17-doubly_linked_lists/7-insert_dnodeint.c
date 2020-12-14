#include "lists.h"

/**
 * insert_dnodeint_at_index - that inserts a new node at a given position.
 * @h: input variable with list.
 * @idx: input variable with index on demand.
 * @n: input variable with data node.
 *
 * Return: new node address.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *auxiliar_node = NULL, *new_node = NULL;
	unsigned int i = 0;

	if (h)
	{
		new_node = malloc(sizeof(dlistint_t));

		auxiliar_node = *h;

		if (idx == 0 || !*h)
			return (add_dnodeint(h, n));

		for (; i < idx - 1; i++)
		{
			if (!auxiliar_node)
				return (NULL);
			auxiliar_node = (*auxiliar_node).next;
		}
		if (i == idx && !(*new_node).next)
			return (add_dnodeint_end(h, n));
		(*new_node).n = n;
		(*auxiliar_node).prev = new_node;
		if ((*auxiliar_node).next)
			(*new_node).next = (*auxiliar_node).next;
		else
			(*auxiliar_node).next = new_node;
	}
	return (EXIT_SUCCESS);
}
