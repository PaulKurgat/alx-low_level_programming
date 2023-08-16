#include <stdio.h>

/* Printing single digit numbers*/

/**
 * main - start point
 * result: 0 (Success)
 */

int main (void)
{
	char n = '0';
		while (n <= '10')
		{
			putchar (n);
			n++;
		}
	putchar ('\n');
	return (0);
}
