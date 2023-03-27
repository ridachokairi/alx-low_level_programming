#include "main.h"

/**
 * rev_string - recerses a string
 * @s: the stirng to reverse
 *
 */

void rev_string(char *s)
{
	int len = 0;
	char *str;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0 ;i--)
	{
		str = s;
		str++;
		s--;
	}
}
