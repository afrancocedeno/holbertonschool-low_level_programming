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
	char aux;

	for (i = 0; src[i] != 0; i++)
	{
		src[i] = aux;
	}
	for (j = 0; aux[j]; j++)
	{
		aux[i + j] = dest[j];
	}
	return (dest);
}
