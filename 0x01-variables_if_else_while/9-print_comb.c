#include <stdio.h>
/**
 * main - entry point function.
 *
 * Return: 0 for succes.
 */

int main(void)
{
	char num = '0';
	
	for(; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
