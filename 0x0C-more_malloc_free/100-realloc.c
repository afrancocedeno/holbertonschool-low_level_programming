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
	unsigned int i;
	void *pointer = NULL;

	ptr = malloc(old_size);
	free(ptr);
	pointer = malloc(new_size);	
	for (i = 0; i < new_size; i++)
		;
	return (pointer);
}
