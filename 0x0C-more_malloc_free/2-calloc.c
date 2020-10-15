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
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array =	malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		*(array + i) = 0;
	return (array);
}
