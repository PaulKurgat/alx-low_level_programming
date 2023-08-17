#include <stdio.h>
/**
 * Code on Base 10 using putchar
 * Description: Only using putchar
 * return: (0)
 */

int main (void)
{
	int p;

	for(p = 0; p <= 9; p++)
	{
		putchar(p + 48);
	}
	putchar ('\n');
	return (0);
}
