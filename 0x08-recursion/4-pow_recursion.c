#include "main.h"

/**
 * _pow_recursion - a function that returns the value of
 * x raised to the power of y.
 * @x: number
 * @y: number
 *
 * Return: number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
