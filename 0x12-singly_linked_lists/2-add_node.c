#include "lists.h"

/**
 * add_node - new node function maker.
 * @head: 
 * @str: 
 *
 * Return: brings back the addres of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));

	if (*head == NULL)
	{
		*head = new_node;
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;
	}
	else
	{
		(*new_node).str = strdup(str); /*1. allocate node*/
		(*new_node).len = strlen(str); /*2. put in the data*/
		(*new_node).next = *head; /*3. make next as new node as head*/
	}
	return (new_node);
}
