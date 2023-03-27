#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: the string to print in reverse
 *
 */

void print_rev(char *s)
{
	int i, len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
