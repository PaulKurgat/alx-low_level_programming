#include "main.h"

/**
 * _pow_recursion - prints the value of x raised to the power of y
 * @x: input of integer to be multiplied
 * @y: intege which x will be raised to the power of
 * Return: value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
