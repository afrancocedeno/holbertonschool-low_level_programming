#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - entry point function.
 * @min: input variable, .
 * @max: input variable, .
 * Return: .
 */

int *array_range(int min, int max)
{
	int i, j = 0;
	int *array = NULL;

	if (min < max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*(array + j) = i;
		j++;
	}
	return (array);
}
	
