#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Entry point function.
 * @str: Input variable.
 * Return: pointer to new location.
 */
char *_strdup(char *str)
{
	int l, i;
	char *pointer;

	for (l = 0; *(str + l) !=  '\0'; l++)
		;
	pointer = malloc(sizeof(*str) * l);
	if (str == NULL || pointer == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		*(pointer + i) = *(str + i);
	}
	return (pointer);
}
