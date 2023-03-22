#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: character in ASCII code
 *  returns: 1 if the character c is lowercase , 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
