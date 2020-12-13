#include "lists.h"

/**
 * free_dlistint - that frees a dlistint_t list.
 * @head: input variable.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *pointer = NULL, *auxiliar_pointer = NULL;

	pointer = head;
	while ((*pointer).next)
	{
		auxiliar_pointer = (*pointer).next;
		free(auxiliar_pointer);
		pointer = auxiliar_pointer;
	}
	free(pointer);
}
