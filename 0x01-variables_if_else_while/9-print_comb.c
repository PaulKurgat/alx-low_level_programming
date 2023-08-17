#include <stdio.h>
/*Commas and numbers here */

/**
 * main - entry
 * results: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++);
	{
		putchar (n);
		putchar (',');
		putchar ('');
	}
	putchar ('\n');
	return (0);
}
