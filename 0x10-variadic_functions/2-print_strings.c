#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/*#include <stddef.h>*/

/**
 * print_strings - input function.
 * @separator: input variable.
 * @n: input variable.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	int j = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		char *pointer = va_arg(list, unsigned int);

		if (pointer != NULL)
			for (j = 0; *(pointer + j) != '\0'; j++)
				printf("%c", *(pointer + j));
		else
			printf("nill");
		if ((i + 1 < n) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
