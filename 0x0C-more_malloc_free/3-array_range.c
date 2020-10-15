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
	int i, *array;

	array = malloc((sizeof(max) - sizeof(max)) * (max - min));
	for(i = min; i <= max; i++)
		*(array + i) = i;
	return (array);
}
