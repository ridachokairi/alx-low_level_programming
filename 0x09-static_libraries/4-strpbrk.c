#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string we look for in
 * @accept: the string we search
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		return (s);
		break;
	}
	return ('\0');
}
