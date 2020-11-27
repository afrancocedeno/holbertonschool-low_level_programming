#include "holberton.h"

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: input variable pointer.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;

	for (; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
			printf("\n");
		printf("%c", (*a)[i]);
	}
	printf("\n");
}
