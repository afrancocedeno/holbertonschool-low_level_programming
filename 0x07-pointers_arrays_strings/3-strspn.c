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
	unsigned int substring_matches = 0, i = 0, j = 0;

	for (; i <= 4; i++)
	{
		for (; j <= 12; j++)
			if (*(s + i) == *(accept + j))
				substring_matches++;
		j = 0;
	}
	return (substring_matches);
}
