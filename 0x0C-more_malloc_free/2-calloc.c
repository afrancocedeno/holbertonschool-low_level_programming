#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - entry point function.
 * @nmemb: input variable, .
 * @size: input variable, .
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array = NULL;
	unsigned int i;
	malloc(sizeof(nmemb) + size);
	for (i = 0; i < nmemb; i++)
		*(array + i) = size;
	return (array);
}
