#include "holberton.h"

/**
 * _strlen_recursion - Recursively string length.
 * @s: Input Variable.
 * Return: Return the pointer.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
