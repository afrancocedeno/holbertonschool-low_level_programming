#include "holberton.h"

/**
 * times_table - entry point function.
 */
void times_table(void)
{
	int lines, numbers, p, aux;

	for (lines = 0; lines < 10; lines++)
	{
		for (numbers = 0; numbers <= 9; numbers++)
		{
			p = numbers * lines;
			aux = (numbers + 1) * lines;
			if (numbers < 9)
			{
				if (aux > 9)
				{
					_putchar(p);
					_putchar(44);
					_putchar(32);
				}
				else if (aux <= 9)
				{
					_putchar(p);
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			}
			else if (numbers == 9)
			{
				_putchar(p);
			}
		}
		_putchar(10);
	}
}
