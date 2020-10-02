#include <stdio.h>

/**
 * main - Entry point.
 * print digit numbers base 10.
 * Return - always 0.
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar (n);
		n++;
	}
	putchar (10);
	return (0);
}
