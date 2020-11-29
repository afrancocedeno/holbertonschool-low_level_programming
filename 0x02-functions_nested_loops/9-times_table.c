#include "holberton.h"

/**
 * times_table - entry point function.
 */
void times_table(void)
{
 	int result = 0, columns = 0, rows = 0;

	for (; columns <= 9; columns++)
	{
		for (; rows <= 9; rows++)
		{
			result = rows * columns;
			if (result <= 9)
			{
				if (rows > 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(result + '0');
				}
				else
				{
					_putchar(result + '0');
				}
			}
		}
		_putchar(10);
		rows = 0;
	}

}
