#include "holberton.h"
#include <stdio.h>

int _pow(int base, int exponent)
{
	int result = 1;

	for (; exponent > 0; exponent--)
		result = base * result;
	return (result);
}

int _pow(int, int);

int main(void)
{
	int i = 0, j = 0, k = 0, l = 0, n = 23456789;

	l = n;
	for (; l > 0; i++)
		l = l /10;
	for (k = i; k > 0; k--)
	{
		j = n / _pow(10, (k - 1));
		_putchar((j % 10) + '0');
	}
	printf("\n");
	return (0);
}