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
	unsigned int substring_length = 0, i = 0;

	if (*(s + i) == *(accept + i))
	{
		substring_length++;
	}
	return (substring_length);
}