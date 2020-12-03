#include "holberton.h"

/**
 * _pow - function that return the pow of a number.
 *
 * @base: base number input.
 * @exponent: exponent input.
 * Return: integer with result.
 */

int _pow(int base, int exponent)
{
	int result = 1;

	for (; exponent > 0; exponent--)
		result = base * result;
	return (result);
}

int _pow(int, int);

/**
 * print_number - function that prints number by nomber one by one.
 *
 * @n: input variable with number to print.
 */
void print_number(int n)
{
	int i = 0, j = 0, k = 0, l = 0;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	else if (n == 0)
		_putchar(48);
	l = n;
	for (; l > 0; i++)
		l = l /10;
	for (k = i; k > 0; k--)
	{
		j = n / _pow(10, (k - 1));
		_putchar((j % 10) + '0');
	}
}