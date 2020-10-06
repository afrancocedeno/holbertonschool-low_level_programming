#include "holberton.h"

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: input variable, Where to copy.
 * @src: input variable, What data is gonna be copyied.
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
