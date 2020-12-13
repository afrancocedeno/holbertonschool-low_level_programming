#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *auxiliar_node = *h, *new_node = NULL;
	unsigned int i = 0;

/* if empty list */
	if (!*h)
		return (NULL);
	if (idx == 0)
		add_dnodeint(h, n);

	for (; i < idx - 1; i++)
	{
		auxiliar_node = (*auxiliar_node).next;
		if (!auxiliar_node && idx - 1 > i)
			return (NULL);
	}
	if (i == idx - 2 && auxiliar_node->next == NULL)
		add_dnodeint_end(h, n);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	(*new_node).n = n;
	(*auxiliar_node).prev = new_node;
	(*new_node).next = (*auxiliar_node).next;
	(*auxiliar_node).next = new_node;


	return (new_node);
}
