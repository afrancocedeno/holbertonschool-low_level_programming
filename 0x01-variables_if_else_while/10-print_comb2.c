#include <stdio.h>

/**
 * main - program that prints numbers from 00 to 99.
 *
 * Return: 0 success.
 */
int main(void)
{
	char ones_index = '0', tens_index = '0';

	while (tens_index <= '9')
	{
		if (ones_index == 58)
		{
			tens_index++;
			ones_index = '0';
		}
		putchar(tens_index);
		putchar(ones_index);
		ones_index++;
		if (tens_index == '9' && ones_index == '9')
		{
			putchar(44);
			putchar(32);
			putchar(tens_index);
			putchar(ones_index);
			break;
		}
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
