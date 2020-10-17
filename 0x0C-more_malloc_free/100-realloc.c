#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - entry point function.
 * @min: input variable, minimum val.
 * @max: input variable, maximum val.
 * Return: pointer with heap address.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer = NULL;

	if (new_size > old_size)
		return (ptr);
	else if (new_size == old_size)
		return (ptr);
	else
	{
		free(ptr);
		pointer = malloc(new_size);
		return (pointer);
	}
}
