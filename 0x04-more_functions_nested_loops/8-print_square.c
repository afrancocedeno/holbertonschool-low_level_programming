#include "holberton.h"
/**
 *print_square - prints a char with an square
 *@size: car inlcuding the size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
{
	_putchar(10);
}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
