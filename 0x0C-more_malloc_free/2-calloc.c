#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - entry point function.
 * @nmemb: input variable, .
 * @size: input variable, .
 * Return: pointer with heap address.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array = NULL;
	unsigned int i;

	array =	malloc(nmemb * size);
	for (i = 0; i < (size*nmemb); i++)
		*(array + i) = size - 1;
	return (array);
}
