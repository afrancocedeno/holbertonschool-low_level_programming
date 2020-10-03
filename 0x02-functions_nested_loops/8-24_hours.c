#include "holberton.h"

/**
 * print_last_digit - function with conditional.
 * clock
 * Return: n value.
 */
void jack_bauer(void)
{
	int H, h, M, m, x;

	for (H = 0; H <= 2; H++) 
	{
		if (h == 2)
			x = 3;
		if (h == 0 || h == 1)
			x = 9;
		for (h = 0; h <= x; h++)
		{
			for (M = 0; M <= 5; M++)
			{
				for (m = 0; m <= 9; m++)
				{
					_putchar(H + '0');
					_putchar(h + '0');
					_putchar(':');
					_putchar(M + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	} 
}
