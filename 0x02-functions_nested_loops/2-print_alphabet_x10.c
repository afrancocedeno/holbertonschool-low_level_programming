#include "holberton.h"

/**
 * print_alphabet_x10 - use the prototype for display the alphabet 10 times
 * imports source file 2-main.c
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char abc;

	for (i = 0; i < 10; i++)
	{
		for (abc = 'a'; abc <= 'z' ; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
