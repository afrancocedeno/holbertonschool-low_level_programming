#include "holberton.h"

/**
 * puts_half - entry point function.
 * @str: global var input.
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != 0; i++)
	{
	}
	for (j = 0; str[j] != 0; j++)
	{
		if (j > ((i - 1) / 2))
		{
			_putchar(str[j]);
		}
	}
	_putchar(10);
}
