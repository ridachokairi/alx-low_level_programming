#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * check_palindrome - palindrome
 * @s: string
 * @l: left index
 * @r: right index
 * Return: integer
 */

int check_palindrome(char *s, int l, int r)
{
	if (s[l] == s[r])
		if (l > r / 2)
			return (1);
		else
			return (check_palindrome(s, l + 1, r - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if s is palindrome, 0 otherwise
 *
 */

int is_palindrome(char *s)
{
	int i = _strlen_recursions(s);

	return (check_palindrome(s, 0, i - 1));
}
