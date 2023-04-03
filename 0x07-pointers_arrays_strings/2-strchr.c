#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a pointer to a string
 * @c: the character we look for
 * Return: the first occurence of the character c in the string s, 0 if the character is not found
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			i++;
		}
		else
		{
			return (c);
			break;
		}
	}
	return (0);
}
