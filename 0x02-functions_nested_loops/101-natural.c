#include <stdio.h>

/**
 * main - Calculates the sum of 3 and 5 multipliers under n
 *
 * Return: Always 0 success
 */

int main(void)
{
	int sum = 0, n = 1024, i = 0;

	for (; i < n; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;

	printf("%d\n", sum);
	return (0);
}
