#include "main.h"

/**
 * _isupper - checks if a letter is uppercase or not
 * @c: a character in ASCII code
 * return: 1 if c is an uppercase , 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
