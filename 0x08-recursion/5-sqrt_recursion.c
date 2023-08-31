#include "main.h"


/**
 * sqrt_a - returns the square root of a number
 * @n: input number
 * @p: iterator
 * Return: square root or -1
 */

int sqrt_a(int n, int p)
{
	if (p * p == n)
	{
		return (p);
	}
	else if (p * p > n)
	{
		return (-1);
	}
	return (sqrt_a(n, p + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: numbers whose square root will be found
 * Return: natural square root of the input
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
