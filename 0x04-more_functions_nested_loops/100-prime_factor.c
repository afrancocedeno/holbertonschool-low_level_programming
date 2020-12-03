#include <stdio.h>

/**
 * main - entry point function.
 *
 * Return: succes 0.
 */
int main(void)
{
	long int number = 612852475143;
	int i = 2;

	for (; number != 1 ;)
	{
		if (number % i == 0)
			number = number / i;
		else
			i++;
	}
	printf("%d\n", i);
	return (0);
}
