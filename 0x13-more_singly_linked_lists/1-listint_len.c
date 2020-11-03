#include "lists.h"

/**
 * listint_len - funcition that calculate the lenght of a linked list.
 * @h: input variable, node spoecifier.
 * Return: number of times it count a linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
