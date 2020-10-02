#include <stdio.h>

/**
 * main - Entry point
 * print alphabet with a while statement
 * Return: Always 0 (Success)
 */
int main(void)
{
	int az;

	az = 122;
	while (az >= 97)
	{
		putchar(az);
		az--;
	}
	putchar('\n');
	return (0);
}
