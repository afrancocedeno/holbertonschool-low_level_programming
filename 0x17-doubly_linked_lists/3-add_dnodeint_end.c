#include "lists.h"

/**
 * add_dnodeint_end - adds a new_node node at the end of a dlistint_t list.
 * @head: input variable with list.
 * @n: input variable with node data.
 *
 * Return: the address of the new_node element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/*an auxiliar node to reference the prevous node*/
	dlistint_t *new_node = NULL, *back = *head;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	(*new_node).n = n;
	/*link my node to the end of the list*/
	(*new_node).next = NULL;
	/*the first node asign new_node node to first and return*/
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	/*evaluate back in next node againts NULL*/
	while ((*back).next)
	/*LINK HEAD TO THE NEXT NODE*/
		back = (*back).next;
	(*back).next = new_node;
	return (new_node);
}
