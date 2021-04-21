#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - binary seacrh algo
 * @array: datatype input.
 * @size: datatype size input.
 * @value: value to search.
 *
 * Return: return index.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t
	left = 0,
	right = size - 1,
	half = 0
	;

	/* if array does not exist */
  if (!array)
		return (-1);

	while (left <= right)
	{
		half = (left + right) / 2;

		print_array(array, left, right);

		/* value equal to half index */
		if (value == *(array + half))
			return (half);

		/* value is in the left half of the array */
		else if (value < *(array + half))
			right = half - 1;

		/* value is in the right half of the array */
		else
			left = half + 1;

	}
	return (-1);
}

/**
 * print_array - print function.
 * @array: input data to print.
 * @start: input index to start printing.
 * @end: input index to finish print.
 */
void print_array(int *array, size_t start, size_t end)
{
	/* print first part of the line */
	printf("Searching in array: ");

	/* print each number in the same line */
	for (; start < end; start++)
		printf("%d, ", *(array + start));

	/* print the last number without colon */
	printf("%d\n", *(array + start));
}
