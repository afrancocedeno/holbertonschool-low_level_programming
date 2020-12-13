#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *auxiliar_node = *head;
	unsigned int i;

	for (; i < index; i++)
	{
		auxiliar_node = (*auxiliar_node).next;
	}
	free_dlistint(auxiliar_node);
	return (1);
}
