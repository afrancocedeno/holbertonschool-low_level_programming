#include <stdio.h>

/**
 * main - Entry point
 * print alphabet with a while statement
 * Return: Always 0 (Success)
 */
int main(void)
{
/*Declaration var_name can be named as you want followed by a comma*/
	char az, AZ;
/*var designation in this case i use single quotes for one char*/
	az = 'a';
/*write the funcion with the right syntax in this case using a while loop*/
	while (az <= 'z')
	{
		putchar(az++);
	}
	AZ = 'A';
/*write the funcion with the right syntax in this case using a while loop*/
	while (AZ <= 'Z')
	{
		putchar(AZ++);
	}
	putchar('\n');
	return (0);
}
