#include "lists.h"

/**
 * free_listint - entry point function.
 * @head: input variable that points to a node.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = NULL, *auxptr = NULL;

	ptr = head;/*declare a pointer to the head of the list*/

	while ((*ptr).next != NULL)
	{
		auxptr = (*ptr).next;
		free(ptr);
		*ptr = *auxptr;
	}
}
