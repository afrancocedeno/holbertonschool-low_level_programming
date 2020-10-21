#include "function_pointers.h"

/**
 * array_iterator - entry point function.
 * @array: input variable.
 * @size: intput variable.
 * @action: intput variable.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i) != 0))
				return(i);
			else if (i + 1 == size)
				return (-1);
		}
	}
	return (0);
}
