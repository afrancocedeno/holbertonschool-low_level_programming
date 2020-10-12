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
	int i, coins = 0, reminder = atoi(*(argv + 1));

	if (argc == 2)
	{
		if (atoi(*(argv + 1)) < 0)
			printf("0\n");
		else
		{
			for (i = 0; reminder != 0; i++)
			{
				if (reminder > 24)
				{
					reminder -= (25);
					coins += (1);
				}
				else if (reminder > 9 && reminder < 25)
				{
					reminder -= (10);
					coins += (1);
				}
				else if (reminder > 4 && reminder < 10)
				{
					reminder -= (5);
					coins += (1);
				}
				else if (reminder > 1 && reminder < 2)
				{
					reminder -= (2);
					coins += (1);
				}
				else if (reminder > 0 && reminder < 1)
				{
					reminder -= (1);
					coins += (1);
				}
			}
			printf("%d\n", coins);
		}
	}	
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
