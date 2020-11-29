#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - fuinction that prints all natural numbers from n to 98.
 *
 * @n: input variable input start numbers.
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	else
		printf("%d, ", n);
	while (n != 98)
	{
		if (n > 98)
		{
			n--;
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
		else if (n < 98)
		{
			n++;
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	printf("\n");
}
