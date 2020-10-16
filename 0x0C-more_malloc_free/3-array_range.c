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
	int i;
	int *array = NULL;

	array = malloc(sizeof(int) * (max - min + 1));
	for(i = min; i <= max; i++)
		*(array + i) = i;
	return (array);
}
