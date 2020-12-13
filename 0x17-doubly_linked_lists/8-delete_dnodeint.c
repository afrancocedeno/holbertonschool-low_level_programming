#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *auxiliar_node = *head;

	if (!*head)
		return (-1);
	else if (index == 0)
	{
		*head = (*auxiliar_node).next;
		(*auxiliar_node).prev = NULL;
		free(auxiliar_node);
		return (1);
	}
	return (1);
}
