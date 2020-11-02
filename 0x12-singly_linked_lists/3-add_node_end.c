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
 * add_node_end - new node function maker after the existing node.
 * @head: double pointer that select the new node.
 * @str: input string.
 *
 * Return: brings back the addres of the first node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	
	(*new).str = strdup(str);
	(*new).len = _strlen(str);
	/*link my node to the end of the list*/
	(*new).next = NULL;
/*the first node asign new node to first and return*/	
	if (head == NULL)
	{
		*head = new;
		return (*head);
	}
/*evaluate head in next node againts NULL*/
	while ((**head).next != NULL)
/*LINK HEAD TO THE NEXT NODE*/
		*head = (**head).next;
	(**head).next = new;
	return (new);
}
