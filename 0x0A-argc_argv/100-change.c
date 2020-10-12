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
	int i, coins = 0, reminder, array[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		reminder = atoi(*(argv + 1));
		if (atoi(*(argv + 1)) < 0)
			printf("0\n");
		else
		{
			for (i = 0; i < 5; i++)
			{
				while (reminder >= array[i])
				{
					reminder -= array[i];
					coins += (1);
				}
				if (reminder == 0)
				{
					printf("%d\n", coins);
					return (0);
				}
			}
		}
		return (0);
	}
}
