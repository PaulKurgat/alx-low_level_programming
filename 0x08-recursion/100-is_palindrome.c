#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string whose length is to be determined
 * Return: length of the strict
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - copares each character of a string
 * @s: input string
 * @left: smallest iterator
 * @right: largest iterator
 * Return: int
 */

int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: input string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
