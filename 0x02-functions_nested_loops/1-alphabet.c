#include "holberton.h"

/**
 * print_alphabet prototype
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
/*Declarations*/
	char abc;

	for (abc = 'a'; abc <= 'z' ; abc++)
	{
		_putchar(abc++);
	}
	_putchar('\n');
}
