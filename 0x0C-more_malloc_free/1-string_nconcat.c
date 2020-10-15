#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - entry point function.
 * @s1: input variable, first string.
 * @s2: input variable, second string.
 * @n: input variable, first n bytes of s2.
 * Return: pointer with heap memory address.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer = NULL;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; *(s1 + l1) != '\0'; l1++)
		;
	for (l2 = 0; *(s2 + l2) != '\0'; l2++)
		;
	if (n >= l2)
	{
		pointer = malloc((sizeof(char)) + l1 + l2);
		if (pointer == NULL)
			return (NULL);
		for (i = 0; i < l1; i++)
			*(pointer + i) = *(s1 + i);
		for (j = l1; j < (l1 + l2); j++)
			*(pointer + j) = *(s2 + (j - l1));
		*(pointer + l1 + l2) = '\0';
	}
	else
	{
		pointer = malloc((sizeof(char)) + l1 + n);
		if (pointer == NULL)
			return (NULL);
		for (i = 0; i < l1; i++)
			*(pointer + i) = *(s1 + i);
		for (j = l1; j < (l1 + n); j++)
			*(pointer + j) = *(s2 + (j - l1));
		*(pointer + l1 + n) = '\0';
	}
	return (pointer);
}
