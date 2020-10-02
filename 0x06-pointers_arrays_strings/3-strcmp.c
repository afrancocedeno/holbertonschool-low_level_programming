#include "holberton.h"

/**
 * _strcmp - Entry point function.
 * @s1: first input string.
 * @s2: second input string.
 * Return: return value for the function.
 */
int _strcmp(char *s1, char *s2)
{
	int l1, l2;

	for (l1 = 0; s1[l1] != 0; l1++)
	{
	}
	for (l2 = 0; s2[l2] != 0; l2++)
	{
	}
	if (l1 > l2)
	{
		return (+15);
	}
	else if (l1 < l2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}

}
