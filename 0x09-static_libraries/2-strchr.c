#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a pointer to a string
 * @c: the character we look for
 * Return: pointer to the first occurence of the character c in the string s, 0 if the character is not found
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
