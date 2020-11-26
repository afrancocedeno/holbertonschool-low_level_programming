#include "holberton.h"
#include <string.h>

/**
 * _strspn - function that calculates the lenght of a prefix substring 
 * 
 * @s: string to be compare.
 * @accept: string containing the chars to match.
 * Return: unsigned int with the length of the prefix string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int substring_length = 0, i = 0, j = 0;
for (; *(s + i) != '\0' ; i++)
{
	for (; *(accept + j); j++)
	{
		if (*(s + i) == *(accept + j))
		{
			substring_length++;
		}
	}
}
	printf("stantard funciton: %d\n", (int)strspn("hello, world", "oleh"));
	printf("s length: %d, accept length: %d, matches: %d\n", i, j, substring_length);
	return (substring_length);
}