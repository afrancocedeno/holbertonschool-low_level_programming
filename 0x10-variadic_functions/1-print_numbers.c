#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * 
 *
 */

/*function ptype, (...) - i´m passing a variable number of arguments*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
/*define variable list variable*/
	unsigned int i;
	va_list list;

/*macros for begin and finish the arguments*/
	va_start(list, n);
/*process and actions*/
	for (i = 0; i < n; i++)
	{
		unsigned int n = va_arg(list, unsigned int);
		if (i < n - 1)
			printf("%d%s", n, separator);
		if (i == n - 1)
			printf("%d\n", n);
	}
	va_end(list);
/*they where all macros, not fuctions*/

}
