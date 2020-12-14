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
	dlistint_t *auxiliar_node = NULL, *new_node = NULL, *temp;
	unsigned int i = 0, list_size = 0;

	if (h)
	{
		new_node = malloc(sizeof(dlistint_t));

		if (!new_node)
			return (NULL);
		temp = *h;
		while (temp != NULL)
		{
			temp = (*temp).next;
			list_size++;
		}
		if (list_size == idx)
			return (add_dnodeint_end(h, n));
		if (list_size < idx)
			return (NULL);
		if (idx == 0)
			return (add_dnodeint(h, n));

		auxiliar_node = *h;

		for (; i < idx; i++)
		{
			if (!(*auxiliar_node).next)
				return (NULL);
			auxiliar_node = (*auxiliar_node).next;
		}
		(*new_node).n = n;
		(*new_node).prev = (*auxiliar_node).prev;
		(*(*auxiliar_node).prev).next = new_node;
		(*auxiliar_node).prev = new_node;
		if ((*auxiliar_node).next)
			(*new_node).next = auxiliar_node;
	}
	return (EXIT_SUCCESS);
}
