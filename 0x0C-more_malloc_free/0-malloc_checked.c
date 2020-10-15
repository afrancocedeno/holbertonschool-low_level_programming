#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - entry point function.
 * @b: input variable.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = NULL;

	pointer = malloc(b);
	
	return (pointer);
}
