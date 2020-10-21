#include "function_pointers.h"

/**
 * print_name - entry point function.
 * @name: input variable.
 * @f: intput variable.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
