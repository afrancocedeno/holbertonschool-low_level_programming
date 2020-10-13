#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point function.
 * @str: Input variable.
 * Return: pointer to new location.
 */
char *_strdup(char *str)
{
	int l, i;
	char *pointer;

	l = strlen(str);
	pointer = malloc(sizeof(*str) * l);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		*(pointer + i) = *(str + i);
	}
	return (pointer);
}
