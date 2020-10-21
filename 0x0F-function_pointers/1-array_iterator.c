#include "function_pointers.h"

/**
 * array_iterator - entry point function.
 * @array: input variable.
 * @size: intput variable.
 * @action: intput variable.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
