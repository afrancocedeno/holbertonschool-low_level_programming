#include "holberton.h"

/**
 * _strcat - entry point function.
 * @src: input variable.
 * @dest: output variable.
 * Return: dest funciton.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
	{
	}
	for (j = 0; src[j]; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
