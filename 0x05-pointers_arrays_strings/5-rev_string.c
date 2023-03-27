#include "main.h"

/**
 * rev_string - recerses a string
 * @s: the stirng to reverse
 *
 */

void rev_string(char *s)
{
	int j = 0,i;
	char str = s[0];

	while (s[j] != '\0')
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
