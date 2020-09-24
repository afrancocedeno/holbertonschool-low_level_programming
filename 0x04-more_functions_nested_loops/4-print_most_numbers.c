#include "holberton.h"

/**
 * print_most_numbers - is just bringing me the result with out 2 and 4
 */
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2')
		{
			n++;
		}
		else if (n == '4')
		{
			n++;
		}
		_putchar(n);
	}
	_putchar('\n');
}
