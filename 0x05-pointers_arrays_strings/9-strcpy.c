#include "holberton.h"

/**
 * _strcpy - entry point function.
 * @dest: global var input.
 * @src: global var input.
 * Return: returns dest string.
 */

char *_strcpy(char *dest, char *src)
{
	int h, i;

	for (h = 0; src[h] != 0; h++)
	{
	}
	for (i = 0; i < h; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
