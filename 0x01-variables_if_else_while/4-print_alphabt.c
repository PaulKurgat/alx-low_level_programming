#include <stdio.h>

/* Print all letters save for two*/

/**
 * Main - Beginning
 * return; Always (0)
*/

int main (void)
{
	char p = 'a';
	while (p <= 'z')
	{
		if (p != 'q' && p != 'e')
		{
			putchar(p);
		}
		p++;
	}
	putchar ('\n');

	return (0);
}
