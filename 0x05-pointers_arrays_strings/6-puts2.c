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
	char *temp = str;

	while (*temp != '\0')
	{
		len++;
		temp++;
	}
	for (i = 0; i <= len - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
