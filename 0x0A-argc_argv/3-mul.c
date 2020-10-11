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
	if (argc > 2 && argc < 4)
	{
		printf("%i\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
		return (0);
	}
	else if (argc <= 2 || argc >= 4)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
