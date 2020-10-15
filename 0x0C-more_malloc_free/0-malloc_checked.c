#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - entry point function.
 * @b: input variable.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *pointer;

	pointer = (unsigned int *) malloc(sizeof(b));
	if (pointer == NULL)
		exit (98);
	return (pointer);
}
