#include <stdio.h>

/**
 * main - entry point function.
 *
 * Return: 0 for succes.
 */
int main(void)
{
	char num = '0';

	for (; num < '9'; num++)
		putchar(num);
	for (num = 'a'; num < 'g'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
