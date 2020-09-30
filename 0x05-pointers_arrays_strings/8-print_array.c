#include "holberton.h"
#include <stdio.h>

/**
 * print_array - entry point functio.
 * @a: global var input.
 * @n: global variable input.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
		{
			printf("%c", 44);
			printf("%c", 32);
		}
	}
	printf("%c", 10);
}
