#include <stdio.h>
/**
 *main - main point
 *return: always 0 (success)
*/
int main(void)
{
	printf("Size of char: %ld bytes(s)\n", sizeof(char));
	printf("Size of char: %ld bytes(s)\n", sizeof(int));
	printf("Size of char: %ld bytes(s)\n", sizeof(long int));
	printf("Size of char: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of char: %ld bytes(s)\n", sizeof(float));
	return (0);
}
