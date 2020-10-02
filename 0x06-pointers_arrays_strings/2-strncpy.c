#include "holberton.h"

/**
 * _strncpy - entry point function.
 * @src: input variable.
 * @dest: output variable.
 * @n: size input.
 * Return: dest funciton.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0' ; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
