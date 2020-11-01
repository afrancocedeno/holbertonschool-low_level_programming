#include "lists.h"

/**
 * _strlen - funcitons that claculate the lenght of a string.
 * @str: input string.
 *
 * Return: the length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	for (; *(str + length); length++)
		;
	return (length);
}

/**
 * add_node - new node function maker.
 * @head: double pointer that select the new node.
 * @str: input string.
 *
 * Return: brings back the addres of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	(*new).str = strdup(str);
	(*new).len = _strlen(str);
	(*new).next = *head;
	*head = new;
	return (*head);
}

