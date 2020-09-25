#include "holberton.h"

/**
 * more_numbers - is just bringing me the result with out 2 and 4
 */
void more_numbers(void)
{
	char uni, dec, lin;

	for (lin = 0; lin <= 9; lin++)
	{
		dec = 0;
		for (uni = 0; uni <= 9; uni++)
		{
			if (dec == 1)
			{
				_putchar (dec + '0');
			}
			_putchar (uni + '0');
			if (uni == 9)
			{
				dec = 1;
				uni = -1;
			}
			else if (dec == 1 && uni == 4)
			{
				break;
			}
		}
		_putchar ('\n');
	}
}
