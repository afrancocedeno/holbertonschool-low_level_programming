#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: input node with head reference.
 * @n: input variable with node data.
 *
 * Return: the address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	(*new_node).n = n;
	(*new_node).next = *head;
	(*new_node).prev = NULL;
	*head = new_node;
	return (new_node);
}
