#include <stdio.h>

/**
 * Rearranging alpgabet in revers
 * main - start off
 * return: 0 (Success)
 */

int main(void)
{
	int n = 122;

	while ( n >= 97)
	{
		putchar (n);
		n--;
	}
	putchar('\n');
	return (0);
}
