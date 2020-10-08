#include "holberton.h"

/**
 * factorial - Entry point function.
 * @n:Input variable.
 * Return: Return 1 or -1 acording to input number n.
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	return (n * factorial(n - 1));
}
