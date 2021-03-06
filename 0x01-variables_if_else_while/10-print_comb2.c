#include <stdio.h>

/**
 * main - program that prints numbers from 00 to 99.
 *
 * Return: 0 success.
 */
int main(void)
{
	int ones_index = 48, tens_index = 48;

	while (tens_index <= 57 && ones_index <= 58)
	{
		putchar(tens_index);
		putchar(ones_index);
		ones_index++;
		if (ones_index == 58)
		{
			tens_index++;
			ones_index = 48;
		}
		if (ones_index < 58 && tens_index < 58)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
