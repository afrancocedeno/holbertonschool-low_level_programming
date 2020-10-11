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
	int i, j, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if ((argv[i][j] < '0') || (argv[i][j] > '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += (atoi((argv[i])));
		}
		printf("%i\n", sum);
	}
	return (0);
}
