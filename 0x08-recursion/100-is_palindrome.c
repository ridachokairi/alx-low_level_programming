#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if s is palindrome, 0 otherwise
 *
 */

int is_palindrome(char *s)
{
	if (n == 1)
		return (is_palindrome(s + 1));
	else
