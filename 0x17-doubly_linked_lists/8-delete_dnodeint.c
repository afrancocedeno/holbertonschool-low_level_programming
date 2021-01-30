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
	dlistint_t *auxiliar_node = NULL;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	auxiliar_node = *head;
	if (index == 0)
	{
		*head = (*auxiliar_node).next;
		if ((*auxiliar_node).next)
			(*(*auxiliar_node).next).prev = NULL;
		free(auxiliar_node);
		return (1);
	}
	for (; i < index; i++)
	{
		if (!auxiliar_node->next)
			return (-1);
		auxiliar_node = (*auxiliar_node).next;
	}
	/* conectar el nodo anterior al siguiente */
	/* comprobar que el siguiente exista */
	/* si no existe conectar anterior a nulo */
	(*(*auxiliar_node).prev).next = (*auxiliar_node).next;
	if ((*auxiliar_node).next)
		(*(*auxiliar_node).next).prev = (*auxiliar_node).prev;
	free(auxiliar_node);
	return (1);
}
