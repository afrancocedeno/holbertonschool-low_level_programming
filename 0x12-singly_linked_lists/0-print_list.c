#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints linked list data.
 * @h: input variable, node spoecifier.
 * Return: number of times it count a linked list.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%d] %s",h->len, h->str);
		h = h->next;
		i++;
	}	
	return (i);
}
