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
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	(*new).str = strdup(str);
	(*new).len = strlen(str);
	(*new).next = *head;
	*head = new;
	return (*head);


}
