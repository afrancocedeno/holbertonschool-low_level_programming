#include "holberton.h"

/**
 * times_table - entry point function.
 */
void print_times_table(int n)
{
	int result = 0, columns = 0, rows = 0;

	if (n >= 0 && n <= 15)
	{
		for (; columns <= n; columns++)
		{
			for (; rows <= n; rows++)
			{
				result = rows * columns;
				if (rows == 0)
					_putchar(result + '0');
				else
				{
					if (result > 9 && result <= 99)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(result / 10 + '0');
						_putchar(result % 10 + '0');
					}
					else if (result <= 9)
					{
						if (rows > 0)
						{
							_putchar(44);
							_putchar(32);
							_putchar(32);
							_putchar(32);
							_putchar(result + '0');
						}
					}
					else if (result > 99)
					{
						_putchar(44);
						_putchar(32);
						_putchar(result / 100 + '0');
						_putchar(result / 10 % 10 + '0');
						_putchar(result % 10 + '0');
					}
				}
			}
			_putchar(10);
			rows = 0;
		}
	}
	else
		_putchar(10);
}

