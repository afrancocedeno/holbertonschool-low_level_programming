#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Entry point function.
 * @size: Input variable.
 * @c: input variable.
 * Return: .
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(array) * size);
	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
