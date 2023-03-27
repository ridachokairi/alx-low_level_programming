#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string 
 *
 */

int _strlen(char *s)
{
	int len,i = 0;

	while (*s != '\0')
	{
		i++;
	}
	len = i;
	return (len);
}
