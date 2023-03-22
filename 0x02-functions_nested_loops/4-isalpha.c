#include "main.h"

/**
 * _isalpha - returns 1 if the character c is a letter, lowercase or uppercase
 * and returns 0 if it is not the case
 *
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
