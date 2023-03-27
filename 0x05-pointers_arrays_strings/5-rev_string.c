#include "main.h"

/**
 * rev_string - recerses a string
 * @s: the stirng to reverse
 *
 */

void rev_string(char *s)
{
	int i = 0,j;
	char str = s[0];

	while (*s != '\0')
	{
		j++;
	}
	for (i = 0; i < j ;i++)
	{
		j--;
		str = s[i];
		s[i] = s[j];
		s[j] = str;
	}
}
