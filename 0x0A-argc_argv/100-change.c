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
	int coins = 0, reminder = atoi(*(argv + 1));

	if (atoi(*(argv + 1)) < 0)
	return (0);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else 
/*		for (i = 0; reminder != 0; i++)*/
	{
		if (reminder > 24)
		{
			reminder -= (25);
			coins += (1);
		}
		if (reminder > 9)
		{
			reminder -= (10);
			coins += (1);
		}
		printf("the reminder is: %d\n", reminder);
		printf("the number of coins is: %d\n", coins);
		return (0);
	}	
}
