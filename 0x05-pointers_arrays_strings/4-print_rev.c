#include "holberton.h"

/**
 * print_rev - entry point function.
 * @s: global value for the string.
 * Return: value a with the funciont in every single loop.
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{

	}
	for (j = (i - 1); s[j] != 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}
