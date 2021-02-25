#include "holberton.h"

/**
 * _sqrt_recursion - Entry point function.
 * @n: Input variable.
 *
 * Return: -1 for not natural square, otherwise return the natural square.
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (_sqrt_compare(n, x));
}

/**
 * _sqrt_compare - funciton description.
 * @input_number: input variable.
 * @ref_number: input variable.
 *
 * Return: -1 if it fails
 */
int _sqrt_compare(int input_number, int ref_number)
{
	if (ref_number * ref_number == input_number)
		return (ref_number);
	if (ref_number * ref_number > input_number)
		return (-1);
	else
	{
		ref_number++;
		return (_sqrt_compare(input_number, ref_number));
	}
	return (0);
}
