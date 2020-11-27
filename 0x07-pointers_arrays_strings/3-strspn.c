#include "holberton.h"

/**
 * _strspn - function that calculates the lenght of a prefix substring
 *
 * @s: string to be compared.
 * @accept: string containing the chars to match.
 * Return: unsigned int with the length of the prefix string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int substring_matches = 0, i = 0, j = 0, s_length = 0, accept_length = 0;

	for (; *(s + s_length) != '\0'; s_length++)
		;
	for (; *(accept + accept_length) != '\0'; accept_length++)
		;
	for (; i <= accept_length; i++)
	{
		for (; j <= s_length; j++)
			if (*(s + i) == *(accept + j))
				substring_matches++;
		j = 0;
	}
	return (substring_matches);
}
