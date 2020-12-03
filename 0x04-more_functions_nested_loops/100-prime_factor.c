#include <stdio.h>

int main(void)
{
	int number = 1231952, i = 0;

	for (; i < 10 ; i++)
		if (number % i == 0)
			number = number / i;
	printf("%d\n", number);
	return (0);
}
