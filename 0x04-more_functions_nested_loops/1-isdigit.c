#include "main.h"

/**
 * _isdigit - checks if a character is a digit or not
 * @c : the character in ASCII code
 * return: 1 if c is a digit, 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
