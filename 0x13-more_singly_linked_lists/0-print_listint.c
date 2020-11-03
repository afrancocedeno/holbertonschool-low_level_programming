#include "lists.h"

/**
 * print_list - function that prints linked list data.
 * @h: input variable, node spoecifier.
 * Return: number of times it count a linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		
		h = h->next;
		i++;
	}
	return (i);
}
