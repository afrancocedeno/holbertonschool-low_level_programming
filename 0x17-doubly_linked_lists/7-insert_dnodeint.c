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
	int l = 0;

	if (h)
	{
		auxiliar_node = *h;
		if (idx == 0)
			return (add_dnodeint(h, n));
		l = dlistint_len(*h);
		if (l == idx)
			return (add_dnodeint_end(h, n));
		if (l < idx)
			return (NULL);
		new_node = malloc(sizeof(dlistint_t));
		for (; i < idx; i++)
		{
			if (!(*auxiliar_node).next)
				return (NULL);
			auxiliar_node = (*auxiliar_node).next;
		}
		(*new_node).n = n;
		(*new_node).prev = auxiliar_node;
		if (!(*auxiliar_node).next)
			(*new_node).next = NULL;
		else
			(*new_node).next = (*auxiliar_node).next;
		(*auxiliar_node).next = new_node;
		return (new_node);
	}
	return (EXIT_SUCCESS);
}