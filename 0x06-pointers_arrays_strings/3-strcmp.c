#include "holberton.h"

/**
 * _strcmp - Entry point function.
 * @s1: first input string.
 * @s2: second input string.
 * Return: return value for the function.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] || s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return ((s1[i] - s2[i]));
		}
		else
			return (0);
	}
	return (0);
}
