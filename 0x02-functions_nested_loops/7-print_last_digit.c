#include "holberton.h"

/**
 * print_last_digit- function with conditional
 * @d: as input from sourcefile.c
 * Return: n value
 */
int print_last_digit(int d)
{
	int n;

	n = (d % 10);
	if (n < 0)
	{
		n = -n;
	_putchar(n + '0');
	}
	else
	{
	_putchar(n + '0');
	}
	return (n);
}
