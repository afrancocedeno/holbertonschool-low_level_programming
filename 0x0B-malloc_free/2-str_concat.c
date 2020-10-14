#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Entry point function.
 * @s1: Input variable.
 * @s2: Input variable.
 * Return: pointer to new location.
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *pointer = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; *(s1 + l1); l1++)
		;
	for (l2 = 0; *(s2 + l2); l2++)
		;
	pointer = malloc(sizeof(char) * (l1 + l2 + 1));
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		*(pointer + i) = *(s1 + i);
	for (j = l1; j < (l1 + l2); j++)
		*(pointer + j) = *(s2 + (j - l1));
	*(pointer + l1 + l2) = '\0';
	return (pointer);
}
