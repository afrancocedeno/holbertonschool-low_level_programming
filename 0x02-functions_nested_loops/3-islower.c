C#include "holberton.h"

/**
 * _islower - checcks lower case typw
 * @c: as imput from 3-main.c sourcefile
 * Return: 0 or 1 if statement
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
