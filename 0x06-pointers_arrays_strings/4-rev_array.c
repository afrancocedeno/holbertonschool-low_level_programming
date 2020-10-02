#include "holberton.h"

/**
 * reverse_array - entry point function.
 * @a: global value for the string.
 * @n: input array size.
 */
void reverse_array(int *a, int n)
{
	int l, o; /*steps: (l)enght, (o)assign*/
	char aux;

	for (l = 0; a[l]; l++)
	{
	}
	o = 0;
	while (o < n)
	{
		aux  = *(a + o);
		*(a + o) = *(a + l - 1);
		*(a + l - 1) = aux;
		l--;
		o++;
	}
}
