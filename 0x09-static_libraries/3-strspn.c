#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string we are looking into
 * @accept: string consists of bytes
 * Return : integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int n = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] ; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
			}
			break;
		}
	}
	return (n);
}
