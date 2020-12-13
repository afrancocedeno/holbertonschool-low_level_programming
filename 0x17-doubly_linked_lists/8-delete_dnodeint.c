#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of linked list.
 * @head: input variable with list.
 * @index: input variable with number of node to remove.
 *
 * Return: 1 for success -1 if failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *auxiliar_node = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	else if (index == 0)
	{
		*head = (*auxiliar_node).next;
		(*auxiliar_node).prev = NULL;
		free(auxiliar_node);
		return (1);
	}
	for (; i <= index - 1; i++)
		auxiliar_node = (*auxiliar_node).next;
	if (!auxiliar_node)
		return (-1);
	else if (!(*auxiliar_node).next)
		(*(*auxiliar_node).prev).next = NULL;
	else if ((*auxiliar_node).next)
	{
		(*(*auxiliar_node).prev).next = (*auxiliar_node).next;
		(*(*auxiliar_node).next).prev = (*auxiliar_node).prev;
		free(auxiliar_node);
		return (1);
	}
	return (1);
}
