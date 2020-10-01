#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - entry point function.
 * @s: global value for the string.
 * Return: value a with the funciont in every single loop.
 */
void rev_string(char *s)
{
	int l, a; /*steps: (l)enght, (a)ssign*/
	char aux;

	l = strlen(s);
	a = 0;
	while (a < l)
	{
		aux  = *(s + a);
		*(s + a) = *(s + l - 1);
		*(s + l - 1) = aux;
		l--;
		a++;
	}
}
