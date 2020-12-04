#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
*/
int main(void)
{
	int character, number;

	number = 2772;
	srand(time(NULL));
	while (number > 122)
	{
		character = (rand() % 128) + 1;
		putchar(character);
		number -= character;
	}
	putchar(number);
	return (0);
}