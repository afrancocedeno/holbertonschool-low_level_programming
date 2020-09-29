#include "holberton.h"
/**
 * swap_int - entry point function
 * @a: input variable for a
 * @b: input variable for b
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	if (c != d)
	{
		*a = d;
		*b = c;
	}
}
