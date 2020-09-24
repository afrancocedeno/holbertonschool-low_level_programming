#include "holberton.h"

/**
 * _isdigit - function to check if is digit
 * @c: as imput from 3-main.c sourcefile
 * Return: 0 or 1 if statement
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
