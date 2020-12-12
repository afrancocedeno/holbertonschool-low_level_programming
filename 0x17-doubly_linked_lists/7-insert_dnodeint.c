#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temporal = *h, *new_node = NULL;
	unsigned int i = 0;

	for (; i < idx - 1; i++)
		temporal = (*temporal).next;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	(*new_node).n = n;
	(*(*temporal).next).prev = new_node;
	(*new_node).next = (*temporal).next;
	(*temporal).next = new_node;
	(*new_node).prev = temporal;
	return (new_node);
}
