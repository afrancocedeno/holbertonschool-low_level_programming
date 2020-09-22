#include "holberton.h"

/**
 * _isalpha - checks alphabetic char
 * @c: as imput from sourcefile.c
 * Return: 0 or 1 if statement
 */
int _isalpha(int c)
{
	return ((c > 64 && c < 123 )||( c > 96 && c < 123));
}
