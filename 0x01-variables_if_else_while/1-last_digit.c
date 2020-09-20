#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * time.h and stdlib random number
 * Return: Always 0 (Success)
 */
int main(void)
{
/*l stands for last digit*/
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n%10;
	printf("Last digit of %d is %d ", n, l);
	if (l > 5)
		printf("and is greater than 5\n");
	else if (l == 0)
		printf("and is 0\n");
	else if (6 > l && l != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
