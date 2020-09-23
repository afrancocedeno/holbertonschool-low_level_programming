#include "holberton.h"

/**
 * 
 * @d: as input from sourcefile.c
 * Return: 
 */
int print_last_digit(int d)
{
	int n;

	n = (d % 10);
	if (n < 0)
	{
		n = -n;
	_putchar(n + '0');
	return (n);
	}
	else
	{
	_putchar(n + '0');
	return (n);
	}
}
