#include "holberton.h"
#include "stdio.h"

/**
 * print_diagsums - funciton that print the sum of diagonals.
 * @a: matriz name global variable input.
 * @size: matriz size input.
 */
void print_diagsums(int *a, int size)
{
	int diag_a = 0, diag_b = 0, i = 0;

	for (; i < size; i++)
		diag_a = *(a + (size * i + i)) + diag_a;
	for (i = 0; i < size; i++)
		diag_b = *(a + ((size - 1) + ((size - 1) * i))) + diag_b;
	printf("%d, ", diag_a);
	printf("%d\n", diag_b);
}
