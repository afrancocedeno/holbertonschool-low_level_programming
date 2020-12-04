#include "holberton.h"
#include <stdlib.h>

int length_s(char *str);
void write_token(char *str, char *token);

/**
 * strtow - Splits a token in separated tokens
 *
 * @str: The token to be separated
 *
 * Return: An array of pointers with each token
 */

char **strtow(char *str)
{
	char **tokens = NULL;
	int counter = 0, i;

	if (str == NULL || *(str) == '\0' ||
	(*(str) == 32 && *(str + 1) == 0))
		return (NULL);

	for (i = 0; *(str + i); i++)
	{
		if ((*(str + i + 1) != 0 && *(str + i) == 32 && *(str + i + 1) != 32) ||
		 (i == 0 && *(str + i) != 32))
			counter++;
	}

	tokens = malloc((counter + 1) * sizeof(char *));
	if (tokens == NULL)
		return (NULL);
	counter = 0;
	i = 0;
	if (*(str + i) != 32)
	{
		*(tokens + counter) = malloc((length_s(str + i) + 1) * sizeof(char));
		if (*(tokens + counter) == NULL)
			return (NULL);
		write_token(str + i, *(tokens + counter));
		counter++;
		i++;
	}
	for (; *(str + i); i++)
	{
		if (*(str + i + 1) != 0 && *(str + i) == 32 && *(str + i + 1) != 32)
		{
			*(tokens + counter) = malloc((length_s(str + i + 1) + 1) * sizeof(char));
			if (*(tokens + counter) == NULL)
				return (NULL);
			write_token(str + i + 1, *(tokens + counter));
			counter++;
		}
	}
	*(tokens + counter) = NULL;
	return (tokens);
}

/**
 * write_token - Write a token in the desired direction
 *
 * @str: The token having the token
 * @token: The direction to write the token
 */

void write_token(char *str, char *token)
{
	int i;

	for (i = 0; *(str + i) != 32 && *(str + i); i++)
		*(token + i) = *(str + i);
	*(token + i) = 0;
}

/**
 * length_s - Computes the length of a token in a token
 *
 * @str: The token having the token beggining at firs char
 *
 * Return: The length of the token
 */

int length_s(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != 32 && *(str + i); i++)
		;
	return (i);
}
