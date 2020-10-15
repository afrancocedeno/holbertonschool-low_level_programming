#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - entry point function.
 * @b: input variable.
 */
void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(sizeof(b));
/*	if (pointer == NULL)
	return(98);*/
	return (pointer);
}
