#include "main.h"

/**
 * puts_half - prints half of a string, followed
 * by a new line
 * @str: the input string
 *
 */

void puts_half(char *str)
{
	int i, len = 0;
	char *temp = str;

	while (*temp != '\0')
	{
		len++;
		temp++;
	}
	if (len % 2 == 0)
		for (i = len / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
			str++;
		}
	if (len % 2 == 1)
		for (i = (len - 1) / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
			str++;
		}
	_putchar('\n');
}
