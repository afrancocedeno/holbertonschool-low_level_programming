#include "holberton.h"
#include <stdio.h>

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
					printf("%i", p);
					printf("%c", 44);
					printf("%c", 32);
				}
				else if (aux <= 9)
				{
					printf("%i", p);
					printf("%c", 44);
					printf("%c", 32);
					printf("%c", 32);
				}
			}
			else if (numbers == 9)
			{
				printf("%i", p);
			}
		}
		printf("%c", 10);
	}
}
