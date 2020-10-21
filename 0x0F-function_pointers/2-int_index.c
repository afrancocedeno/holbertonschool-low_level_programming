#include "function_pointers.h"

/**
 * int_index - entry point function.
 * @array: input variable.
 * @size: intput variable.
 * @cmp: intput variable.
 * Return: return value for fuction.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)) != 0)
				return (i);
			else if (i + 1 == size)
				return (-1);
		}
	}
	return (-1);
}
