#include "holberton.h"

void print_chessboard(char (*a)[8])
{
	int i = 0;
/* el primer puntero coje cada linea */
/* el segundo puntero coje cada caracter */

	/*printf("%c\n", **a);
	printf("%c\n", (*a)[45]);
	printf("%c\n", (*(a + 7))[3]);
	printf("%c\n", *(*(a + 0) + 0));*/

	for (; i < 64; i++)
		printf("%c\n", (*a)[i]);
}