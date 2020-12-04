#include <stdio.h>

/**
 * main - sums fibonacci even numbers les than 4M
 *
 * Return: Always 0 success.
 */

int main(void)
{
	long int i = 3, penultimate = 1, ultimate = 2,
	current = 0, limsup = 4000000, suma = 2;

	for (; current <= limsup; i++)
	{
		current = penultimate + ultimate;
		if (current % 2 == 0)
			suma = suma + current;
		penultimate = ultimate;
		ultimate = current;
	}
	printf("%ld\n", suma);
	return (0);
}
