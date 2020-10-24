#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * 
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i + 1 < n)
			printf("%s", separator);
		else if (i + 1 == n)
			printf("\n");
	}
	va_end(list);
}
