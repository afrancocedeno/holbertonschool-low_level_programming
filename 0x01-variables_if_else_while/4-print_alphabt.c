#include <stdio.h>

/**
 * main - Entry point
 * print alphabet with a while statement
 * Return: Always 0 (Success)
 */
int main(void)
{
/*Declaration var_name can be named as you want followed by a comma*/
	char az;

	az = 'a';
	while (az < 'e')
	{
		putchar(az++);
	}
	while (az < 'q')
	{
		putchar(az++);
	}
	while (az <= 'z')
	{
		putchar(az++);
	}

	putchar('\n');
	return (0);
}
