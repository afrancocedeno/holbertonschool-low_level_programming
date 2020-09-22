#include "holberton.h"

/**
 * print_alphabet - use the prototype for display the alphabet
 * imports source file 1-main.c
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
/*Declarations*/
	char abc;

	for (abc = 'a'; abc <= 'z' ; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
