#include "lists.h"

/**
 * dlistint_len - number of element in a linked list.
 * @h: input variable with header.
 *
 * Return: value with
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; i++)
		h = h->next;
	return (i);
}

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
	unsigned int i = 0, l = 0;

	if (!h)
		return (NULL);
	auxiliar_node = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	l = dlistint_len(*h);
	if (l == idx)
		return (add_dnodeint_end(h, n));
	if (l < idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	for (; i < idx - 1; i++)
		auxiliar_node = (*auxiliar_node).next;
	(*new_node).n = n;
	(*new_node).prev = auxiliar_node;
	(*new_node).next = (*auxiliar_node).next;
	/* linking the next to the prev */
	(*(*auxiliar_node).next).prev = new_node;
	(*auxiliar_node).next = new_node;
	return (new_node);
}
