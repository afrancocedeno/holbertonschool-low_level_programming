#include <stdarg.h>

/**
 * sum_them_all - entry point function.
 * @n: input variable.
 * Return: return sum to main.
 */

/*function ptype, (...) - i´m passing a variable number of arguments*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

/*define variable list variable*/
	va_list ap;
/*macros for begin and finish the arguments*/
	va_start(ap, n);
/*process and actions*/
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
/*they where all macros, not fuctions*/
}
