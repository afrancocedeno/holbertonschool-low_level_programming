#include "holberton.h"

/**
 * _pow_recursion - Entry point funcion.
 * @x: Input variable, number.
 * @y: Input varibale, power.
 * Return: n/a.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * _pow_recursion(x, (y - 1)));
	return (1);
}
