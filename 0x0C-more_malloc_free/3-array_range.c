#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - entry point function.
 * @min: input variable, minimum val.
 * @max: input variable, maximum val.
 * Return: pointer with heap address.
 */

int *array_range(int min, int max)
{
	int i, j = 0, *array = NULL;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		*(array + j) = i;
		j++;
	}
	return (array);
}
	
