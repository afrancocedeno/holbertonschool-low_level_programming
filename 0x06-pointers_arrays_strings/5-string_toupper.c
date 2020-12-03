#include "holberton.h"

/**
 * string_toupper - function that modify an string to upper case.
 *
 * @str: input varieble to function.
 * Return: string modified.
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (; *(str + i); i++)
		if (*(str + i) >= 'a' && *(str + i) <= 'z' && *(str + i - 1) != '\\')
			*(str + i) -= 32;
	return (str);
}
