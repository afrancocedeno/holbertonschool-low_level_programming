#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - function that change into upper case.
 *
 * @s: input string
 * Return: return modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	if (*s >= 'a' && *s <= 'z')
		*s -= 32;
	for (; *(s + i); i++)
		if ((*(s + i) >= 'a' && *(s + i) <= 'z')
	&& ((*(s + i - 1) == 32 || *(s + i - 1) == 9 || *(s + i - 1) == 10
	|| *(s + i - 1) == 44 || *(s + i - 1) == 59
	|| *(s + i - 1) == 46 || *(s + i - 1) == 33 || *(s + i - 1) == 63
	|| *(s + i - 1) == 34 || *(s + i - 1) == 40
	|| *(s + i - 1) == 41 || *(s + i - 1) == 123 || *(s + i - 1) == 125)))
			*(s + i) -= 32;
	return (s);
}
