#include "holberton.h"

/**
 * _sqrt_recursion - Entry point function.
 * @n: Input variable.
 * Return: -1 for not natural square, otherwise return the natural square.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n > 0)
		return (_sqrt_recursion(n - 1) + n - 1);
	else
		return(-1);
}
