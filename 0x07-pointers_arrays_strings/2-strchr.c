#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Variable with the string input.
 * @c: Variable that contain the char to locate.
 * Return: c, pointer to initial value.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else if (*(s + i + 1) == '\0')
		{
			return (NULL);
		}
	}
	return (NULL);
}

