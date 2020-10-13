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
	char *pointer = NULL;

	if (str == NULL)
		return (NULL);
	for (l = 0; *(str + l) !=  '\0'; l++)
		;
	pointer = malloc(sizeof(char) * (l + 1));
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		*(pointer + i) = *(str + i);
	}
	*(pointer + i) = '\0';
	return (pointer);
}
