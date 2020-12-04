#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit - Returns the las digit of the integer argument
 *
 * @n: The integer argument
 * Return: The las digit of the integer
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit >= 0)
	{
		_putchar(last_digit + '0');
	}
	else
	{
		last_digit = -1 * last_digit;
		_putchar(last_digit + '0');

	}

	return (last_digit);
}