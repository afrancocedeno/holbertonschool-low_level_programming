#include "holberton.h"
#include <string.h>

/**
 * _strcpy - entry point function.
 * @dest: global var input.
 * @src: global var input.
 * Return: returns dest string.
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;
	
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
      	return (dest);
}
