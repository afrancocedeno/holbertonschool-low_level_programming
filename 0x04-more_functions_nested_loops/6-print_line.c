#include "holberton.h"
/**
 *print_line - entry point function
 *
 */
void print_line(int n)
{
	int loop;
	for (loop = 0; loop < n; loop++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

