#include "holberton.h"
#include <stdio.h>

/**
 * times_table - entry point function.
 */
void times_table(void)
{
	int line, numbers, p;

	for (line = 0; line < 9; line++)
	{
		for (numbers = 0; numbers <= 9; numbers++)
		{
			p = numbers * line;
			printf("%i", p);
			if (numbers < 9)
			{
				printf("%c", 44);
				printf("%c", 32);
			}
			if (p <= 9)
			{
				printf("%c", 32);
			}
		}
		printf("%c", 10);
	}
}
