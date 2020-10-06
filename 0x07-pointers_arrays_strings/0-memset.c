#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: input variable, Where to put the data.
 * @b: input variable, What data is gonna be putted.
 * @n: input variable, Whay ammount of data putted.
 * Return: Non void function, 0 (succes).
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	b = 0x01;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (0);
}
