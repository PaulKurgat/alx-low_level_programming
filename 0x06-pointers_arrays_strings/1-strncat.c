#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings with specific bytes
 * @dest: input
 * @src: input
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
