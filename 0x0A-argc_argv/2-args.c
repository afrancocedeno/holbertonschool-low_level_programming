#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point function.
 * @argc: Input value, number of arguments, argv size.
 * @argv: Input value, line arguments, array.
 * Return: 0 succes.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}
