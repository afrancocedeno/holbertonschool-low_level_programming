#include "holberton.h"

/**
 * _puts - entry point function.
 * @str: global value for the string.
 * Return: value a with the funciont in every single loop.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
