#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: input variable, Where to put the data.
 * @b: input variable, What data is gonna be putted.
 * @n: input variable, Whay ammount of data putted.
 * Return: pointer to memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
