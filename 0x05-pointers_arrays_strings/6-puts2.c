#include "main.h"

/**
 * puts2 - prints every other character  of a string,
 * starting with the first character,
 * followed by a new line
 * @str: the input string
 *
 */

void puts2(char *str)
{
	int i, len = 0;

	while (*str != '\0')
	{
		len++;
	}
	str--;
	for (i = 0; i < len - 1; i = i + 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
