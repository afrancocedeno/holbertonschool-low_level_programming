#include "holberton.h"

/**
 * _atoi -  convert a string to an integer.
 * @s: string to convert
 *
 * Return: the first number in the string
 */
int _atoi(char *s)
{
	unsigned int res = 0;
	int current = 0;
	int signo = 1;

	while (*s)
	{
		if (*s == '-')
			signo *= -1;
		if (*s >= '0' && *s <= '9')
		{
			res = res * 10 + *s - '0';
			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}
		s++;
	}
	if (signo < 0)
		return (current = res * signo);
	else
		return (res * signo);
}
