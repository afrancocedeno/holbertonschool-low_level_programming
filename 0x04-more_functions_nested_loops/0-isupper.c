#include "holberton.h"

/**
 * _isupper - checcks lower case typw
 * @c: as imput from 3-main.c sourcefile
 * Return: 0 or 1 if statement
 */
int _isupper(int c)

{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
