#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - funcition that calculate the lenght of a linked list.
 * @h: input variable, node spoecifier.
 * Return: number of times it count a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
