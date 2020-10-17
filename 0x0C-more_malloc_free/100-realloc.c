#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - entry point function.
 * @ptr: address input.
 * @old_size: input variable, minimum val.
 * @new_size: input variable, maximum val.
 * Return: pointer with heap address.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer = NULL;

	if (new_size > old_size)
		return (ptr);
	else if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		return (NULL);
	free(ptr);
	pointer = malloc(new_size);
	return (pointer);
}
