#include "holberton.h"

/**
 * leet - encrypt a message witha given rules
 *
 * @input: The addres of message to be encrypted
 *
 * Return: The direction of the encrypted message
 */

char *leet(char *input)
{
	int i, j;
	char processed[] = {52, 51, 48, 55, 49};
	char out[] = {65, 69, 79, 84, 76};

	for (i = 0; i <= 4; i++)
		for (j = 0; *(input + j); j++)
			if (*(input + j) == *(out + i) || *(input + j) == *(out + i) + 32)
				*(input + j) = *(processed + i);

	return (input);
}