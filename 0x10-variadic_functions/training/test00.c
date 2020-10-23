#include <stdio.h>
#include <stdarg.h>

/*function ptype, (...) - i´m passing a variable number of arguments*/
int add(int args, ...)
{
	int i, sum = 0;

/*define variable list variable*/
	va_list ap;
/*macros for begin and finish the arguments*/
	va_start(ap, args);
/*process and actions*/
	for (i = 0; i < args; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return(sum);
}

int main(void)
{
	printf("Add1 = %d\n", add(3, 1, 2, 3));
	printf("Add2 = %d\n", add(2, 5, 6));
	return (0);
}
