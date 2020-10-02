#include "holberton.h"

/**
 * _strncat - entry point function.
 * @src: input variable.
 * @dest: output variable.
 * @n: size input.
 * Return: dest funciton.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
	{
	}
	if (i < n)
	{
		for (j = 0; src[j]; j++)
		{
			dest[i + j] = src[j];
		}
	}
	else if (i > n)
		for (j = 0; j < n; j++)
		{
			dest[i + j] = src[j];
		}
	return (dest);
}
