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
	}
	if (len == 0)
		_putchar(" ");
	else if (len == 1)
		_putchar(*s);
	else 
	{
		for (i = len - 2; i >= 0; i--)
		{
		_putchar(*s);
		}
	}
	_putchar('\n');
}
