#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (s[i] != '\0' && i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
