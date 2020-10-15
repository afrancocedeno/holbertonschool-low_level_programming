#include <stdlib.h>
#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - entry point function.
 * @s1: input variable, first string.
 * @s2: input variable, second string.
 * @n: input variable, first n bytes of s2.
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer = NULL;
	unsigned int i, j, l1, l2;
	
	l1 = strlen(s1);
	printf("%i\n", l1);
	l2 = strlen(s2);
	printf("%i\n", l2);
	pointer = malloc((sizeof(s1)) + l1 + n);
	for (i = 0; i < l1; i++)
		*(pointer + i) = *(s1 + i);
	for (j = l1; j < (l1 + n); j++)
		*(pointer + j) = *(s2 + (j - l1));
	*(pointer + l1 + n) = '\0';

	return (pointer);
	free(pointer);
}

