#include "lists.h"

/**
 * add_nodeint - new node function maker.
 * @head: double pointer that select the new node.
 * @str: input string.
 *
 * Return: brings back the addres of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = *head;
	*head = new;
	return (*head);
}
