#include "holberton.h"

/**
 * main - Entry point
 * use a for loop and an array
 * Return: Always 0 (Success)
 */

int main(void)
{
/*Declarations*/
	char text[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
