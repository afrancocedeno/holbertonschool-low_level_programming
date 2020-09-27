#include <stdio.h>
/**
 *main - 
 *
 */
void main(void)
{
	int n, tres, cinco;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBizz");
		}
		else if (n % 3 == 0)
		{		
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Bizz");
			}
		else
		{
		printf("%d", n);
		}
		putchar(32);
     	}
}
