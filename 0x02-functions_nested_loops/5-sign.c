#include "holberton.h"

/**
 * print_sign - checks if positive or negative
 * @n: as input from sourcefile.c
 * Return: statement
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
