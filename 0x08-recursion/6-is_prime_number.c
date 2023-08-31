#include "main.h"

/**
 * prime_a - determines if a number is prime
 * @a: input
 * @k: divisor
 * Return:(0)
 */

int prime_a(int a, int k)
{
	if (a <= 1 || (a != k && a % k == 0))
	{
		return (0);
	}
	else if (a == k)
	{
		return (1);
	}
	return (prime_a(a, k + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input of the number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
