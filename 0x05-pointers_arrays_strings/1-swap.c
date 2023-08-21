#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer value to be swapped
 * @b: integer value to be swapped
 * Results: void
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
