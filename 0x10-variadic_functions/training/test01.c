/*variable argument list*/

#include <stdio.h>
#include <stdarg.h>

void printIntList(int count, ...)
{
	int i;
	va_list list;

	va_start(list, count);
	for (i = 0; i <= count; i++)
	{
		int num = va_arg(list, int);
		printf("%d: %d\n", i, num);
	}
	va_end(list);
}

int main()
{
	printIntList(4, 6, 2, 1, 7);
	return (0);
}
