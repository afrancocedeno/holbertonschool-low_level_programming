#include <stdio.h>
/**
 *main - entry point void 
 */
int main(void)
{
	int n;

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
	return (0);
}
