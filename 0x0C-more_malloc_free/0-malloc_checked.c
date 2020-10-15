#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - entry point function.
 * @b: input variable.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = NULL;
/*	if ( typeof (b) == char)*/
		char *pointer = (char *) malloc(sizeof(b));
/*	if (pointer == NULL)
	exit (98);*/
	return (pointer);
}
