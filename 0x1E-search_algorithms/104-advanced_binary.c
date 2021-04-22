#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary - function to call recursion.
 * @array: input datratypé
 * @left: first index.
 * @right: last index
 * @value: input data to search.
 *
 * Return: the index.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (!array)
		return (-1);
	return (recursive_advanced_binary(array, left, right, value));
}

/**
 * recursive_advanced_binary - funtion recursion.
 * @array: input datratypé
 * @left: first index.
 * @right: last index
 * @value: input data to search.
 *
 * Return: the index.
 */
int recursive_advanced_binary(int *array, size_t left, size_t right, int value)
{
	size_t half;

	if (left <= right)
	{
		half = (left + right) / 2;

		print_array(array, left, right);

		/* value equal to half index */
		if (value == *(array + half) && (
			value >= *(array + half - 1) || (value <= *(array + half - 1))))
			return (half);

		/* value is in the left half of the array */
		/* value can be the same as the half */
		else if (value <= *(array + half))
			right = half - 1;

		/* value is in the right half of the array */
		else if (value >= *(array + half))
			left = half + 1;

		return (recursive_advanced_binary(array, left, right, value));
	}
	return (-1);
}

void recursive_print_array(int *array, size_t start, size_t end);

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

	recursive_print_array(array, start, end);
	/* print the last number without colon */
	printf("%d\n", *(array + end));
}
	/* print each number in the same line */
void recursive_print_array(int *array, size_t start, size_t end)
{
	if (start < end)
	{
		printf("%d, ", *(array + start));
		start++;
		recursive_print_array(array, start, end);
	}
}
