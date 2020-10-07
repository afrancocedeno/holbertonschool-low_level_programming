#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Entry point function.
 * @s: Input variable with the string.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
