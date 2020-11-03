#include "lists.h"

/**
 * add_nodeint_end - new node function maker after the existing node.
 * @head: double pointer that select the new node.
 * @str: input string.
 *
 * Return: brings back the addres of the first node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
/*an auxiliar node to reference the prevous node*/
	listint_t *new = NULL, *back = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	/*link my node to the end of the list*/
	(*new).next = NULL;
/*the first node asign new node to first and return*/
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
/*evaluate back in next node againts NULL*/
	while ((*back).next)
/*LINK HEAD TO THE NEXT NODE*/
		back = (*back).next;
	(*back).next = new;
	return (new);
}
