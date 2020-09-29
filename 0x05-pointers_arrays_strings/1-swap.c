#include "holberton.h"
/**
 * swap_int - entry point function
 * @a: input variable for a
 * @b: input variable for b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
