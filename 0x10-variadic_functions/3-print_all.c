#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * 
 *
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;

	va_start(list, format);

	while (*(format + i) != '\0')
	{
		while (j < 4)
		{
			if (functionarray[j].print(list) == format[i])
				printf("%c", va_arg(list, char));
			j++;
		}
		i++;
	}
}
void *functionarray[4] = {funchar, funint, funfloa, funstr};
void funchar(va_list list);
{
	printf("%c", va_arg(list, char))
}
void funchar(va_list list);
{
	printf("%c", va_arg(list, char))
}
void pchar(va_list list);
{
	printf("%c", va_arg(list, char))
}
void pchar(va_list list);
{
	printf("%c", va_arg(list, char))
}
